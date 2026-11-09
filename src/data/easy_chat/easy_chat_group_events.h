#if ENGLISH
const u8 gEasyChatWord_Appeal[] = _("APPEAL");
const u8 gEasyChatWord_Events[] = _("EVENTS");
const u8 gEasyChatWord_StayAtHome[] = _("STAY-AT-HOME");
const u8 gEasyChatWord_Berry[] = _("BERRY");
const u8 gEasyChatWord_Contest[] = _("CONTEST");
const u8 gEasyChatWord_Mc[] = _("MC");
const u8 gEasyChatWord_Judge[] = _("JUDGE");
const u8 gEasyChatWord_Super[] = _("SUPER");
const u8 gEasyChatWord_Stage[] = _("STAGE");
const u8 gEasyChatWord_HallOfFame[] = _("HALL OF FAME");
const u8 gEasyChatWord_Evolution[] = _("EVOLUTION");
const u8 gEasyChatWord_Hyper[] = _("HYPER");
const u8 gEasyChatWord_BattleTower[] = _("BATTLE TOWER");
const u8 gEasyChatWord_Leaders[] = _("LEADERS");
const u8 gEasyChatWord_BattleRoom[] = _("BATTLE ROOM");
const u8 gEasyChatWord_Hidden[] = _("HIDDEN");
const u8 gEasyChatWord_SecretBase[] = _("SECRET BASE");
const u8 gEasyChatWord_Blend[] = _("BLEND");
const u8 gEasyChatWord_POKEBLOCK[] = _("{POKEBLOCK}");
const u8 gEasyChatWord_Master[] = _("MASTER");
const u8 gEasyChatWord_Rank[] = _("RANK");
const u8 gEasyChatWord_Ribbon[] = _("RIBBON");
const u8 gEasyChatWord_Crush[] = _("CRUSH");
const u8 gEasyChatWord_Direct[] = _("DIRECT");
const u8 gEasyChatWord_Tower[] = _("TOWER");
const u8 gEasyChatWord_Union[] = _("UNION");
const u8 gEasyChatWord_Room[] = _("ROOM");
const u8 gEasyChatWord_Wireless[] = _("WIRELESS");
const u8 gEasyChatWord_Frontier[] = _("FRONTIER");
#elif GERMAN
const u8 gEasyChatWord_Appeal[] = _("AUSDRUCK");
const u8 gEasyChatWord_Events[] = _("EVENTS");
const u8 gEasyChatWord_StayAtHome[] = _("BABYSITTEN");
const u8 gEasyChatWord_Berry[] = _("BEERE");
const u8 gEasyChatWord_Contest[] = _("WETTBEWERB");
const u8 gEasyChatWord_Mc[] = _("MC");
const u8 gEasyChatWord_Judge[] = _("JUROR");
const u8 gEasyChatWord_Super[] = _("SUPER");
const u8 gEasyChatWord_Stage[] = _("BÜHNE");
const u8 gEasyChatWord_HallOfFame[] = _("RUHMESHALLE");
const u8 gEasyChatWord_Evolution[] = _("ENTWICKLUNG");
const u8 gEasyChatWord_Hyper[] = _("HYPER");
const u8 gEasyChatWord_BattleTower[] = _("DUELLTURM");
const u8 gEasyChatWord_Leaders[] = _("LEITER");
const u8 gEasyChatWord_BattleRoom[] = _("KAMPFRAUM");
const u8 gEasyChatWord_Hidden[] = _("VERSTECKTE");
const u8 gEasyChatWord_SecretBase[] = _("GEHEIMBASIS");
const u8 gEasyChatWord_Blend[] = _("MIXEN");
const u8 gEasyChatWord_POKEBLOCK[] = _("{POKEBLOCK}");
const u8 gEasyChatWord_Master[] = _("MEISTER");
const u8 gEasyChatWord_Rank[] = _("KLASSE");
const u8 gEasyChatWord_Ribbon[] = _("BAND");
const u8 gEasyChatWord_Crush[] = _("MÜHLE");
const u8 gEasyChatWord_Direct[] = _("DIREKT");
const u8 gEasyChatWord_Tower[] = _("TURM");
const u8 gEasyChatWord_Union[] = _("KONNEX");
const u8 gEasyChatWord_Room[] = _("KLUB");
const u8 gEasyChatWord_Wireless[] = _("DRAHTLOS");
const u8 gEasyChatWord_Frontier[] = _("ZONE");
#endif

const struct EasyChatWordInfo gEasyChatGroup_Events[] = {
    [EC_INDEX(EC_WORD_APPEAL)] =
    {
        .text = gEasyChatWord_Appeal,
        .alphabeticalOrder = EC_INDEX(EC_WORD_APPEAL),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_EVENTS)] =
    {
        .text = gEasyChatWord_Events,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_BATTLE_ROOM),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_STAY_AT_HOME),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_STAY_AT_HOME)] =
    {
        .text = gEasyChatWord_StayAtHome,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_BATTLE_TOWER),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_RIBBON),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BERRY)] =
    {
        .text = gEasyChatWord_Berry,
        .alphabeticalOrder = EC_INDEX(EC_WORD_BERRY),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CONTEST)] =
    {
        .text = gEasyChatWord_Contest,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_BLEND),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_STAGE),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MC)] =
    {
        .text = gEasyChatWord_Mc,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_CONTEST),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_DIRECT),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_JUDGE)] =
    {
        .text = gEasyChatWord_Judge,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_CRUSH),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_WIRELESS),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SUPER)] =
    {
        .text = gEasyChatWord_Super,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_DIRECT),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_BATTLE_TOWER),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_STAGE)] =
    {
        .text = gEasyChatWord_Stage,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_EVENTS),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_EVOLUTION),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HALL_OF_FAME)] =
    {
        .text = gEasyChatWord_HallOfFame,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_EVOLUTION),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_EVENTS),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_EVOLUTION)] =
    {
        .text = gEasyChatWord_Evolution,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_FRONTIER),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_SECRET_BASE),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HYPER)] =
    {
        .text = gEasyChatWord_Hyper,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_HALL_OF_FAME),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_HYPER),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BATTLE_TOWER)] =
    {
        .text = gEasyChatWord_BattleTower,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_HIDDEN),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_JUDGE),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LEADERS)] =
    {
        .text = gEasyChatWord_Leaders,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_HYPER),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_BATTLE_ROOM),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BATTLE_ROOM)] =
    {
        .text = gEasyChatWord_BattleRoom,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_JUDGE),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_RANK),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HIDDEN)] =
    {
        .text = gEasyChatWord_Hidden,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_LEADERS),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_ROOM),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SECRET_BASE)] =
    {
        .text = gEasyChatWord_SecretBase,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_MASTER),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_UNION),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BLEND)] =
    {
        .text = gEasyChatWord_Blend,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_MC),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_LEADERS),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_POKEBLOCK)] =
    {
        .text = gEasyChatWord_POKEBLOCK,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_POKEBLOCK),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_MC),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MASTER)] =
    {
        .text = gEasyChatWord_Master,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_RANK),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_MASTER),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_RANK)] =
    {
        .text = gEasyChatWord_Rank,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_RIBBON),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_BLEND),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_RIBBON)] =
    {
        .text = gEasyChatWord_Ribbon,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_ROOM),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_CRUSH),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CRUSH)] =
    {
        .text = gEasyChatWord_Crush,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_SECRET_BASE),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_POKEBLOCK),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DIRECT)] =
    {
        .text = gEasyChatWord_Direct,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_STAGE),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_HALL_OF_FAME),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TOWER)] =
    {
        .text = gEasyChatWord_Tower,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_STAY_AT_HOME),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_SUPER),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_UNION)] =
    {
        .text = gEasyChatWord_Union,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_SUPER),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_TOWER),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ROOM)] =
    {
        .text = gEasyChatWord_Room,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_TOWER),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_HIDDEN),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WIRELESS)] =
    {
        .text = gEasyChatWord_Wireless,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_UNION),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_CONTEST),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FRONTIER)] =
    {
        .text = gEasyChatWord_Frontier,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_WIRELESS),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_FRONTIER),
#endif
        .enabled = TRUE,
    },
};
