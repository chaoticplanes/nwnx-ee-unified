<#
.SYNOPSIS
    Execute a Docker build for the NWNX code
.DESCRIPTION
    Pulls the NWNX Docker build Image and runs a container to execute local builds of NWNX Linux.  Removes the requirement to confiure a local buil environment as the Docker image is preconfigured.
#>
Param(
    # Clean build - remove Binaries and re-execute cmake
    [switch]$FORCECLEAN = $false,
    # Concurrent job count for the make command
    [parameter()][String]$JOBS = ""
)

if ($FORCECLEAN) {
    $CLEAN = "-c"
}
$MAKEJOBS = ""
if ($JOBS -ne "") {
    $MAKEJOBS = "-j " + $JOBS
}

if (-not $(${PWD} -match "^([A-Za-z])\:(\\.*)$"))
{
    Write-Error "Couldn't match the current directory to a known windows path pattern."
    exit 1
}

$drive = $Matches[1].ToLower()
$dir = $Matches[2] -replace "\\", "/"
$voldir = "/${drive}${dir}"

docker run --rm -w /nwnx/home --entrypoint "/bin/bash" -v "${voldir}:/nwnx/home" nwnxee/builder /nwnx/home/Scripts/buildnwnx.sh $CLEAN $JOBS
