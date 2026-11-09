#if ENGLISH
const u8 gEasyChatWord_KthxBye[] = _("KTHX, BYE.");
const u8 gEasyChatWord_YesSirExcl[] = _("YES, SIR!");
const u8 gEasyChatWord_AvantGarde[] = _("AVANT GARDE");
const u8 gEasyChatWord_Couple[] = _("COUPLE");
const u8 gEasyChatWord_MuchObliged[] = _("MUCH OBLIGED");
const u8 gEasyChatWord_YeehawExcl[] = _("YEEHAW!");
const u8 gEasyChatWord_Mega[] = _("MEGA");
const u8 gEasyChatWord_1HitKOExcl[] = _("1-HIT KO!");
const u8 gEasyChatWord_Destiny[] = _("DESTINY");
const u8 gEasyChatWord_Cancel[] = _("CANCEL");
const u8 gEasyChatWord_New[] = _("NEW");
const u8 gEasyChatWord_Flatten[] = _("FLATTEN");
const u8 gEasyChatWord_Kidding[] = _("KIDDING");
const u8 gEasyChatWord_Loser[] = _("LOSER");
const u8 gEasyChatWord_Losing[] = _("LOSING");
const u8 gEasyChatWord_Happening[] = _("HAPPENING");
const u8 gEasyChatWord_HipAnd[] = _("HIP AND");
const u8 gEasyChatWord_Shake[] = _("SHAKE");
const u8 gEasyChatWord_Shady[] = _("SHADY");
const u8 gEasyChatWord_Upbeat[] = _("UPBEAT");
const u8 gEasyChatWord_Modern[] = _("MODERN");
const u8 gEasyChatWord_SmellYa[] = _("SMELL YA");
const u8 gEasyChatWord_Bang[] = _("BANG");
const u8 gEasyChatWord_Knockout[] = _("KNOCKOUT");
const u8 gEasyChatWord_Hassle[] = _("HASSLE");
const u8 gEasyChatWord_Winner[] = _("WINNER");
const u8 gEasyChatWord_Fever[] = _("FEVER");
const u8 gEasyChatWord_Wannabe[] = _("WANNABE");
const u8 gEasyChatWord_Baby[] = _("BABY");
const u8 gEasyChatWord_Heart[] = _("HEART");
const u8 gEasyChatWord_Old[] = _("OLD");
const u8 gEasyChatWord_Young[] = _("YOUNG");
const u8 gEasyChatWord_Ugly[] = _("UGLY");
#elif GERMAN
const u8 gEasyChatWord_KthxBye[] = _("VOKUHILA");
const u8 gEasyChatWord_YesSirExcl[] = _("AYE, AYE!");
const u8 gEasyChatWord_AvantGarde[] = _("AVANTGARDE");
const u8 gEasyChatWord_Couple[] = _("YUPPIES");
const u8 gEasyChatWord_MuchObliged[] = _("IHR DIENER!");
const u8 gEasyChatWord_YeehawExcl[] = _("JIIHAAH");
const u8 gEasyChatWord_Mega[] = _("MEGA");
const u8 gEasyChatWord_1HitKOExcl[] = _("GUMMIPUNKT");
const u8 gEasyChatWord_Destiny[] = _("KARMA");
const u8 gEasyChatWord_Cancel[] = _("NDW");
const u8 gEasyChatWord_New[] = _("POPPER");
const u8 gEasyChatWord_Flatten[] = _("ERDBEERTEE");
const u8 gEasyChatWord_Kidding[] = _("SCHOFEL");
const u8 gEasyChatWord_Loser[] = _("LOSER");
const u8 gEasyChatWord_Losing[] = _("ZOFF");
const u8 gEasyChatWord_Happening[] = _("GIMMICK");
const u8 gEasyChatWord_HipAnd[] = _("HIP UND");
const u8 gEasyChatWord_Shake[] = _("BANANENSHAKE");
const u8 gEasyChatWord_Shady[] = _("ROCK’N’ROLL");
const u8 gEasyChatWord_Upbeat[] = _("DUFTE");
const u8 gEasyChatWord_Modern[] = _("MODERN");
const u8 gEasyChatWord_SmellYa[] = _("RÜBENNASE");
const u8 gEasyChatWord_Bang[] = _("STULPEN");
const u8 gEasyChatWord_Knockout[] = _("LICHT AUS...");
const u8 gEasyChatWord_Hassle[] = _("AUFSTAND");
const u8 gEasyChatWord_Winner[] = _("LEUCHTKEKS");
const u8 gEasyChatWord_Fever[] = _("KÖRPERHITZE");
const u8 gEasyChatWord_Wannabe[] = _("GERNEGROSS");
const u8 gEasyChatWord_Baby[] = _("BABY");
const u8 gEasyChatWord_Heart[] = _("HOLDE");
const u8 gEasyChatWord_Old[] = _("OLL");
const u8 gEasyChatWord_Young[] = _("JUNG");
const u8 gEasyChatWord_Ugly[] = _("ÄTZEND");
#endif

const struct EasyChatWordInfo gEasyChatGroup_TrendySaying[] = {
    [EC_INDEX(EC_WORD_KTHX_BYE)] =
    {
        .text = gEasyChatWord_KthxBye,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_1_HIT_KO_EXCL),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_UGLY),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_YES_SIR_EXCL)] =
    {
        .text = gEasyChatWord_YesSirExcl,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_AVANT_GARDE),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_HASSLE),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_AVANT_GARDE)] =
    {
        .text = gEasyChatWord_AvantGarde,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_BABY),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_AVANT_GARDE),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_COUPLE)] =
    {
        .text = gEasyChatWord_Couple,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_BANG),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_YES_SIR_EXCL),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MUCH_OBLIGED)] =
    {
        .text = gEasyChatWord_MuchObliged,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_CANCEL),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_BABY),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_YEEHAW_EXCL)] =
    {
        .text = gEasyChatWord_YeehawExcl,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_COUPLE),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_SHAKE),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MEGA)] =
    {
        .text = gEasyChatWord_Mega,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_DESTINY),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_UPBEAT),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_1_HIT_KO_EXCL)] =
    {
        .text = gEasyChatWord_1HitKOExcl,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_FEVER),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_FLATTEN),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DESTINY)] =
    {
        .text = gEasyChatWord_Destiny,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_FLATTEN),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_WANNABE),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CANCEL)] =
    {
        .text = gEasyChatWord_Cancel,
        .alphabeticalOrder = EC_INDEX(EC_WORD_HAPPENING),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_NEW)] =
    {
        .text = gEasyChatWord_New,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_HASSLE),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_1_HIT_KO_EXCL),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FLATTEN)] =
    {
        .text = gEasyChatWord_Flatten,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_HEART),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_HIP_AND),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_KIDDING)] =
    {
        .text = gEasyChatWord_Kidding,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_HIP_AND),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_HEART),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LOSER)] =
    {
        .text = gEasyChatWord_Loser,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_KIDDING),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_MUCH_OBLIGED),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LOSING)] =
    {
        .text = gEasyChatWord_Losing,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_KNOCKOUT),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_YEEHAW_EXCL),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HAPPENING)] =
    {
        .text = gEasyChatWord_Happening,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_KTHX_BYE),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_YOUNG),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HIP_AND)] =
    {
        .text = gEasyChatWord_HipAnd,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_LOSER),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_DESTINY),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SHAKE)] =
    {
        .text = gEasyChatWord_Shake,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_LOSING),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_FEVER),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SHADY)] =
    {
        .text = gEasyChatWord_Shady,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_MEGA),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_WINNER),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_UPBEAT)] =
    {
        .text = gEasyChatWord_Upbeat,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_MODERN),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_KNOCKOUT),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MODERN)] =
    {
        .text = gEasyChatWord_Modern,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_MUCH_OBLIGED),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_LOSER),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SMELL_YA)] =
    {
        .text = gEasyChatWord_SmellYa,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_NEW),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_MEGA),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BANG)] =
    {
        .text = gEasyChatWord_Bang,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_OLD),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_MODERN),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_KNOCKOUT)] =
    {
        .text = gEasyChatWord_Knockout,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_SHADY),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_CANCEL),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HASSLE)] =
    {
        .text = gEasyChatWord_Hassle,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_SHAKE),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_OLD),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WINNER)] =
    {
        .text = gEasyChatWord_Winner,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_SMELL_YA),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_NEW),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FEVER)] =
    {
        .text = gEasyChatWord_Fever,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_UGLY),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_SHADY),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WANNABE)] =
    {
        .text = gEasyChatWord_Wannabe,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_UPBEAT),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_SMELL_YA),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BABY)] =
    {
        .text = gEasyChatWord_Baby,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_WANNABE),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_KIDDING),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HEART)] =
    {
        .text = gEasyChatWord_Heart,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_WINNER),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_BANG),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_OLD)] =
    {
        .text = gEasyChatWord_Old,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_YEEHAW_EXCL),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_KTHX_BYE),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_YOUNG)] =
    {
        .text = gEasyChatWord_Young,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_YES_SIR_EXCL),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_COUPLE),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_UGLY)] =
    {
        .text = gEasyChatWord_Ugly,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_YOUNG),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_LOSING),
#endif
        .enabled = TRUE,
    },
};
