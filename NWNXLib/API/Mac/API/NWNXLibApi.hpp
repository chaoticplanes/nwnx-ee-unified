#pragma once

namespace NWNXLib {

namespace API {

struct C2DA;
struct CAppManager;
struct CCallbackImplTemplated12;
struct CCallbackImplTemplated20;
struct CCallbackImplTemplated28;
struct CCallbackImplTemplated4;
struct CCallbackImplTemplated8;
struct CCodeBase;
struct CCodeBaseInternal;
struct CCombatInformation;
struct CCombatInformationNode;
struct CERFFile;
struct CERFKey;
struct CERFRes;
struct CERFString;
struct CExoAliasList;
struct CExoAliasListInternal;
struct CExoArrayListTemplatedCExoString;
struct CExoArrayListTemplatedCFileInfo;
struct CExoArrayListTemplatedCNetLayerPlayerCDKeyInfo;
struct CExoArrayListTemplatedCNWItemProperty;
struct CExoArrayListTemplatedCNWSPersonalReputation;
struct CExoArrayListTemplatedCNWSPlayerJournalQuestUpdates;
struct CExoArrayListTemplatedCNWSScriptVar;
struct CExoArrayListTemplatedCResRef;
struct CExoArrayListTemplatedCWorldJournalEntry;
struct CExoArrayListTemplatedfloat;
struct CExoArrayListTemplatedSJournalEntry;
struct CExoBase;
struct CExoBaseInternal;
struct CExoCriticalSection;
struct CExoCriticalSectionInternal;
struct CExoDebug;
struct CExoDebugInternal;
struct CExoEncapsulatedFile;
struct CExoEncrypt;
struct CExoFile;
struct CExoFileInternal;
struct CExoFileThread;
struct CExoIni;
struct CExoIniInternal;
struct CExoKeyTable;
struct CExoLinkedListInternal;
struct CExoLinkedListTemplatedCLinuxFileSection;
struct CExoLocString;
struct CExoLocStringInternal;
struct CExoMemman;
struct CExoPackedFile;
struct CExoRand;
struct CExoRandInternal;
struct CExoResFile;
struct CExoResMan;
struct CExoResourceImageFile;
struct CExoString;
struct CExoStringList;
struct CExoTimers;
struct CExoTimersInternal;
struct CExtendedServerInfo;
struct CFactionManager;
struct CGameEffect;
struct CGameObject;
struct CGameObjectArray;
struct CItemRepository;
struct CLastUpdateObject;
struct CLoopingVisualEffect;
struct CMemRecord;
struct CNetLayer;
struct CNetLayerInternal;
struct CNetLayerPlayerInfo;
struct CNetLayerSessionInfo;
struct CNetLayerWindow;
struct CNWArea;
struct CNWBaseItem;
struct CNWBaseItemArray;
struct CNWCCMessageData;
struct CNWClass;
struct CNWCreatureStatsUpdate;
struct CNWDomain;
struct CNWDoorSurfaceMesh;
struct CNWFeat;
struct CNWItem;
struct CNWLevelStats;
struct CNWMessage;
struct CNWNameGen;
struct CNWPlaceableSurfaceMesh;
struct CNWPlaceMeshManager;
struct CNWRace;
struct CNWRules;
struct CNWSAmbientSound;
struct CNWSArea;
struct CNWSAreaOfEffectObject;
struct CNWSBarter;
struct CNWSClient;
struct CNWSCombatAttackData;
struct CNWSCombatRound;
struct CNWSCombatRoundAction;
struct CNWSCreature;
struct CNWSCreatureStats;
struct CNWSCreatureStats_ClassInfo;
struct CNWSDialog;
struct CNWSDialogEntry;
struct CNWSDoor;
struct CNWSDungeonMaster;
struct CNWSEffectListHandler;
struct CNWSEncounter;
struct CNWSExpression;
struct CNWSExpressionList;
struct CNWSExpressionNode;
struct CNWSFaction;
struct CNWSForcedAction;
struct CNWSInventory;
struct CNWSItem;
struct CNWSItemPropertyHandler;
struct CNWSJournal;
struct CNWSkill;
struct CNWSMessage;
struct CNWSModule;
struct CNWSObject;
struct CNWSObjectActionNode;
struct CNWSpell;
struct CNWSpellArray;
struct CNWSPlaceable;
struct CNWSPlayer;
struct CNWSPlayerCharSheetGUI;
struct CNWSPlayerContainerGUI;
struct CNWSPlayerInventoryGUI;
struct CNWSPlayerLastUpdateObject;
struct CNWSPlayerLUOInventory;
struct CNWSPlayerStoreGUI;
struct CNWSPlayerTURD;
struct CNWSRules;
struct CNWSScriptVarTable;
struct CNWSSoundObject;
struct CNWSSpellScriptData;
struct CNWSStats_Spell;
struct CNWSStats_SpellLikeAbility;
struct CNWSStore;
struct CNWSSysAdmin;
struct CNWSTile;
struct CNWSTransition;
struct CNWSTrigger;
struct CNWSWaypoint;
struct CNWTile;
struct CNWTileData;
struct CNWTileSet;
struct CNWTileSetManager;
struct CNWTileSurfaceMesh;
struct CNWTileSurfaceMeshAABBNode;
struct CNWTileSurfaceMeshHashTableEntry;
struct CNWVirtualMachineCommands;
struct CObjectLookupTable;
struct CObjectTableManager;
struct CPathfindInfoIntraTileSuccessors;
struct CPathfindInformation;
struct CrashReporter_Linux;
struct CRes;
struct CRes2DA;
struct CResARE;
struct CResDWK;
struct CResGFF;
struct CResGFFFieldIDHash;
struct CResHelperTemplatedCRes2DA2017;
struct CResHelperTemplatedCResARE2012;
struct CResHelperTemplatedCResDWK2052;
struct CResHelperTemplatedCResIFO2014;
struct CResHelperTemplatedCResLTR2036;
struct CResHelperTemplatedCResNCS2010;
struct CResHelperTemplatedCResNDB2064;
struct CResHelperTemplatedCResNSS2009;
struct CResHelperTemplatedCResPWK2053;
struct CResHelperTemplatedCResSET2013;
struct CResHelperTemplatedCResWOK2016;
struct CResIFO;
struct CResLTR;
struct CResNCS;
struct CResNDB;
struct CResNSS;
struct CResPWK;
struct CResRef;
struct CResSET;
struct CResTGA;
struct CResWOK;
struct CScriptCompiler;
struct CScriptCompilerIdListEntry;
struct CScriptEvent;
struct CScriptLocation;
struct CScriptParseTreeNode;
struct CScriptParseTreeNodeBlock;
struct CScriptSourceFile;
struct CScriptTalent;
struct CServerAIBodyBagInfo;
struct CServerAIEventNode;
struct CServerAIList;
struct CServerAIMaster;
struct CServerExoApp;
struct CServerExoAppInternal;
struct CServerInfo;
struct CStoreCustomer;
struct CTlkFile;
struct CTlkTable;
struct CTwoDimArrays;
struct CVirtualMachine;
struct CVirtualMachineCache;
struct CVirtualMachineDebuggerInstance;
struct CVirtualMachineDebugLoader;
struct CVirtualMachineFile;
struct CVirtualMachineScript;
struct CVirtualMachineStack;
struct CWorldTimer;
struct CAutoSave;
struct CBaseExoApp;
struct CBWCBase;
struct CBWCBlowFish;
struct CBWCBlowFishBlock;
struct CBWCBlowFishState;
struct CBWCMD5;
struct CCallbackBase;
struct CCallbackHandlerBase;
struct CCallbackManualTemplatedCSteamInternalLobbyChatUpdate_tfalse;
struct CCallbackManualTemplatedCSteamInternalLobbyCreated_tfalse;
struct CCallbackManualTemplatedCSteamInternalLobbyDataUpdate_tfalse;
struct CCallbackManualTemplatedCSteamInternalLobbyEnter_tfalse;
struct CCallbackManualTemplatedCSteamInternalLobbyMatchList_tfalse;
struct CCallbackManualTemplatedCSteamInternalP2PSessionRequest_tfalse;
struct CCallbackTemplatedCSteamInternalLobbyChatUpdate_tfalse;
struct CCallbackTemplatedCSteamInternalLobbyCreated_tfalse;
struct CCallbackTemplatedCSteamInternalLobbyDataUpdate_tfalse;
struct CCallbackTemplatedCSteamInternalLobbyEnter_tfalse;
struct CCallbackTemplatedCSteamInternalLobbyMatchList_tfalse;
struct CCallbackTemplatedCSteamInternalP2PSessionRequest_tfalse;
struct CCallResultTemplatedCSteamInternalEncryptedAppTicketResponse_t;
struct CCallResultTemplatedCSteamInternalLobbyEnter_t;
struct CClientExoApp;
struct CConnectionLib;
struct CConnectionLib__RoomListEntry;
struct CEffectIconObject;
struct CEncounterListEntry;
struct CEncounterSpawnPoint;
struct CExoAliasListInternal__CExoAlias;
struct CExoArrayListTemplatedCCombatInformationNodePtr;
struct CExoArrayListTemplatedCConnectionLib__RoomListEntry;
struct CExoArrayListTemplatedCEffectIconObjectPtr;
struct CExoArrayListTemplatedCExoStringPtr;
struct CExoArrayListTemplatedCFeatUseListEntryPtr;
struct CExoArrayListTemplatedCGameEffectPtr;
struct CExoArrayListTemplatedCGameObjectPtr;
struct CExoArrayListTemplatedchar;
struct CExoArrayListTemplatedCLoopingVisualEffectPtr;
struct CExoArrayListTemplatedCNWCCMessageDataPtr;
struct CExoArrayListTemplatedCNWLevelStatsPtr;
struct CExoArrayListTemplatedCNWSExpressionListPtr;
struct CExoArrayListTemplatedCNWSExpressionNodePtr;
struct CExoArrayListTemplatedCNWSExpressionPtr;
struct CExoArrayListTemplatedCNWSFactionPtr;
struct CExoArrayListTemplatedCNWSInvitationDetails;
struct CExoArrayListTemplatedCNWSItemPtr;
struct CExoArrayListTemplatedCNWSPVPEntry;
struct CExoArrayListTemplatedCNWSSpellScriptDataPtr;
struct CExoArrayListTemplatedCNWSStats_SpellLikeAbility;
struct CExoArrayListTemplatedCNWSStats_SpellPtr;
struct CExoArrayListTemplatedCNWSTagNode;
struct CExoArrayListTemplatedCNWTileSurfaceMeshAABBNodePtr;
struct CExoArrayListTemplatedCNWVisibilityNodePtr;
struct CExoArrayListTemplatedconstCGameEffectPtr;
struct CExoArrayListTemplatedCScriptLogPtr;
struct CExoArrayListTemplatedCSpell_AddPtr;
struct CExoArrayListTemplatedCSpell_DeletePtr;
struct CExoArrayListTemplatedCStoreCustomerPtr;
struct CExoArrayListTemplatedCVirtualMachineFilePtr;
struct CExoArrayListTemplatedint;
struct CExoArrayListTemplatedlonglongunsignedint;
struct CExoArrayListTemplatedlongunsignedint;
struct CExoArrayListTemplatedNWPlayerCharacterList_stPtr;
struct CExoArrayListTemplatedNWPlayerCharacterListClass_st;
struct CExoArrayListTemplatedSCodeBaseDataPtr;
struct CExoArrayListTemplatedshortunsignedint;
struct CExoArrayListTemplatedSMstBuddyEntryPtr;
struct CExoArrayListTemplatedSMstDigiDistInfoPtr;
struct CExoArrayListTemplatedSMstKeyEntryPtr;
struct CExoArrayListTemplatedSMstNameEntryPtr;
struct CExoArrayListTemplatedSSubNetProfilePtr;
struct CExoArrayListTemplatedunsignedchar;
struct CExoLinkedListNode;
struct CExoLinkedListTemplatedC2DA;
struct CExoLinkedListTemplatedCERFKey;
struct CExoLinkedListTemplatedCERFRes;
struct CExoLinkedListTemplatedCERFString;
struct CExoLinkedListTemplatedCExoKeyTable;
struct CExoLinkedListTemplatedCExoString;
struct CExoLinkedListTemplatedCKeyTableInfo;
struct CExoLinkedListTemplatedCLastUpdateObject;
struct CExoLinkedListTemplatedCLastUpdatePartyObject;
struct CExoLinkedListTemplatedCLinuxFileKey;
struct CExoLinkedListTemplatedCNWSClient;
struct CExoLinkedListTemplatedCNWSCombatRoundAction;
struct CExoLinkedListTemplatedCNWSDialogPlayer;
struct CExoLinkedListTemplatedCNWSObjectActionNode;
struct CExoLinkedListTemplatedCNWSPlayer;
struct CExoLinkedListTemplatedCNWSPlayerLUOInventoryItem;
struct CExoLinkedListTemplatedCNWSPlayerPtr;
struct CExoLinkedListTemplatedCNWSPlayerTURD;
struct CExoLinkedListTemplatedCRes;
struct CExoLinkedListTemplatedCResRef;
struct CExoLinkedListTemplatedCServerAIEventNode;
struct CExoLinkedListTemplatedExoLocString_st;
struct CExoLinkedListTemplatedlongunsignedint;
struct CExoLinkedListTemplatedNWAreaExpansion_st;
struct CExoLinkedListTemplatedNWModuleCutScene_st;
struct CExoLinkedListTemplatedNWModuleExpansion_st;
struct CExoLinkedListTemplatedNWPlayerListItem_st;
struct CExoLinkedListTemplatedshortunsignedint;
struct CExoMemHeap;
struct CExoMemHeapStats;
struct CExoMemHeapWalkInfo;
struct CExoNet;
struct CExoNetExtendableBuffer;
struct CExoNetFrameBuffer;
struct CExoNetInternal;
struct CFeatUseListEntry;
struct CFileInfo;
struct CGameEffectApplierRemover;
struct CGameObjectArrayNode;
struct Chunk;
struct CItemPropertyApplierRemover;
struct CJoiningRestrictions;
struct CKeyTableEntry;
struct CKeyTableInfo;
struct CLastUpdatePartyObject;
struct CLinuxFileKey;
struct CLinuxFileSection;
struct CMessageProfile;
struct CMstNetLayer;
struct CNetLayerPlayerCDKeyInfo;
struct CNetworkProfiler;
struct CNWActionNode;
struct CNWAmbientSound;
struct CNWCArea;
struct CNWCAreaOfEffectObject;
struct CNWCCreature;
struct CNWCDoor;
struct CNWCItem;
struct CNWClass__CNWClass_Skill;
struct CNWClass_Feat;
struct CNWCModule;
struct CNWCObject;
struct CNWCPlaceable;
struct CNWCProjectile;
struct CNWCSoundObject;
struct CNWCStore;
struct CNWCTrigger;
struct CNWItemProperty;
struct CNWReentrantServerStats;
struct CNWSAnimBase;
struct CNWSAreaGridSuccessors;
struct CNWSAreaGridTransTableEntry;
struct CNWSAreaInterTileSuccessors;
struct CNWSCreatureAppearanceInfo;
struct CNWSCreRestorePolymorphData;
struct CNWSDialogLinkEntry;
struct CNWSDialogLinkReply;
struct CNWSDialogPlayer;
struct CNWSDialogReply;
struct CNWSDialogSpeaker;
struct CNWSInvitationDetails;
struct CNWSPersonalReputation;
struct CNWSPlayerJournalQuest;
struct CNWSPlayerJournalQuestUpdates;
struct CNWSPlayerLUOAppearanceInfo;
struct CNWSPlayerLUOInventoryItem;
struct CNWSPlayerLUOQuickbarItemButton;
struct CNWSPlayerLUOSortedObjectList;
struct CNWSPVPEntry;
struct CNWSQuickbarButton;
struct CNWSScriptVar;
struct CNWSTagNode;
struct CNWTilePathNode;
struct CNWTileSurfaceMeshLocalInfo;
struct CNWTileSurfaceMeshNodeFace;
struct CNWTileSurfaceMeshNodeVertex;
struct CNWTileSurfaceMeshSortSuccessors;
struct CNWVisibilityNode;
struct CODE4St;
struct CODE4TRANSSt;
struct COLLATE4;
struct CPersistantWorldOptions;
struct CPlayOptions;
struct CrashReporterData;
struct CResetOption;
struct CResGFFField;
struct CResGFFFileHeader;
struct CResGFFLabel;
struct CResGFFStruct;
struct CResHelperTemplatedCRes2DA2017u;
struct CResHelperTemplatedCResARE2012u;
struct CResHelperTemplatedCResDWK2052u;
struct CResHelperTemplatedCResIFO2014u;
struct CResHelperTemplatedCResLTR2036u;
struct CResHelperTemplatedCResNCS2010u;
struct CResHelperTemplatedCResNDB2064u;
struct CResHelperTemplatedCResNSS2009u;
struct CResHelperTemplatedCResPWK2053u;
struct CResHelperTemplatedCResSET2013u;
struct CResHelperTemplatedCResWOK2016u;
struct CResList;
struct CResStruct;
struct CScriptCompilerIdentifierHashTableEntry;
struct CScriptCompilerIncludeFileStackEntry;
struct CScriptCompilerInternal;
struct CScriptCompilerKeyWordEntry;
struct CScriptCompilerStackEntry;
struct CScriptCompilerStructureEntry;
struct CScriptCompilerStructureFieldEntry;
struct CScriptCompilerSymbolTableEntry;
struct CScriptCompilerVarStackEntry;
struct CScriptLog;
struct CServerNetOptions;
struct CServerOptionLookup;
struct CSpell_Add;
struct CSpell_Delete;
struct CSteam;
struct CSteamID;
struct CSteamID__SteamID_t__SteamIDComponent_t;
struct CSteamInternal;
struct CTlkTableToken;
struct CTlkTableTokenCustom;
struct CURRENCY4;
struct CVirtualMachineCmdImplementer;
struct CVirtualMachineDebuggingContext;
struct CVirtualMachineInternal;
struct CWorldJournalEntry;

}

}