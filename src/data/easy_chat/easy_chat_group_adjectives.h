#if ENGLISH
const u8 gEasyChatWord_Wandering[] = _("WANDERING");
const u8 gEasyChatWord_Rickety[] = _("RICKETY");
const u8 gEasyChatWord_RockSolid[] = _("ROCK-SOLID");
const u8 gEasyChatWord_Hungry[] = _("HUNGRY");
const u8 gEasyChatWord_Tight[] = _("TIGHT");
const u8 gEasyChatWord_Ticklish[] = _("TICKLISH");
const u8 gEasyChatWord_Twirling[] = _("TWIRLING");
const u8 gEasyChatWord_Spiraling[] = _("SPIRALING");
const u8 gEasyChatWord_Thirsty[] = _("THIRSTY");
const u8 gEasyChatWord_Lolling[] = _("LOLLING");
const u8 gEasyChatWord_Silky[] = _("SILKY");
const u8 gEasyChatWord_Sadly[] = _("SADLY");
const u8 gEasyChatWord_Hopeless[] = _("HOPELESS");
const u8 gEasyChatWord_Useless[] = _("USELESS");
const u8 gEasyChatWord_Drooling[] = _("DROOLING");
const u8 gEasyChatWord_Exciting[] = _("EXCITING");
const u8 gEasyChatWord_Thick[] = _("THICK");
const u8 gEasyChatWord_Smooth[] = _("SMOOTH");
const u8 gEasyChatWord_Slimy[] = _("SLIMY");
const u8 gEasyChatWord_Thin[] = _("THIN");
const u8 gEasyChatWord_Break[] = _("BREAK");
const u8 gEasyChatWord_Voracious[] = _("VORACIOUS");
const u8 gEasyChatWord_Scatter[] = _("SCATTER");
const u8 gEasyChatWord_Awesome[] = _("AWESOME");
const u8 gEasyChatWord_Wimpy[] = _("WIMPY");
const u8 gEasyChatWord_Wobbly[] = _("WOBBLY");
const u8 gEasyChatWord_Shaky[] = _("SHAKY");
const u8 gEasyChatWord_Ripped[] = _("RIPPED");
const u8 gEasyChatWord_Shredded[] = _("SHREDDED");
const u8 gEasyChatWord_Increasing[] = _("INCREASING");
const u8 gEasyChatWord_Yet[] = _("YET");
const u8 gEasyChatWord_Destroyed[] = _("DESTROYED");
const u8 gEasyChatWord_Fiery[] = _("FIERY");
const u8 gEasyChatWord_LoveyDovey[] = _("LOVEY-DOVEY");
const u8 gEasyChatWord_Happily[] = _("HAPPILY");
const u8 gEasyChatWord_Anticipation[] = _("ANTICIPATION");
#elif GERMAN
const u8 gEasyChatWord_Wandering[] = _("LATSCH");
const u8 gEasyChatWord_Rickety[] = _("WACKEL");
const u8 gEasyChatWord_RockSolid[] = _("STEINHART");
const u8 gEasyChatWord_Hungry[] = _("MAGENKNURR");
const u8 gEasyChatWord_Tight[] = _("KNURSCHP");
const u8 gEasyChatWord_Ticklish[] = _("KILLE KILLE");
const u8 gEasyChatWord_Twirling[] = _("SCHLEUDER");
const u8 gEasyChatWord_Spiraling[] = _("WIRBEL");
const u8 gEasyChatWord_Thirsty[] = _("LECHZ");
const u8 gEasyChatWord_Lolling[] = _("LÜMMEL RÄKEL");
const u8 gEasyChatWord_Silky[] = _("WUSCHEL");
const u8 gEasyChatWord_Sadly[] = _("SCHNÜFF");
const u8 gEasyChatWord_Hopeless[] = _("OOCH");
const u8 gEasyChatWord_Useless[] = _("MÜLL");
const u8 gEasyChatWord_Drooling[] = _("SABBER");
const u8 gEasyChatWord_Exciting[] = _("JIPP! JIPP!");
const u8 gEasyChatWord_Thick[] = _("SCHWABBEL");
const u8 gEasyChatWord_Smooth[] = _("GLATT");
const u8 gEasyChatWord_Slimy[] = _("GLIBBER");
const u8 gEasyChatWord_Thin[] = _("KLAPPER");
const u8 gEasyChatWord_Break[] = _("SCHEPPER");
const u8 gEasyChatWord_Voracious[] = _("MAMPF FRESS");
const u8 gEasyChatWord_Scatter[] = _("SCHMEISS");
const u8 gEasyChatWord_Awesome[] = _("IRRE");
const u8 gEasyChatWord_Wimpy[] = _("ANGST BIBBER");
const u8 gEasyChatWord_Wobbly[] = _("ZITTER");
const u8 gEasyChatWord_Shaky[] = _("SCHÜTTEL");
const u8 gEasyChatWord_Ripped[] = _("RATSCH");
const u8 gEasyChatWord_Shredded[] = _("FETZ");
const u8 gEasyChatWord_Increasing[] = _("WURGS");
const u8 gEasyChatWord_Yet[] = _("NÖÖÖ");
const u8 gEasyChatWord_Destroyed[] = _("RUMMS BERST");
const u8 gEasyChatWord_Fiery[] = _("ZISCH FACKEL");
const u8 gEasyChatWord_LoveyDovey[] = _("SCHNUCKELIG");
const u8 gEasyChatWord_Happily[] = _("MEGAGRINS");
const u8 gEasyChatWord_Anticipation[] = _("GRINS HOFF");
#endif

const struct EasyChatWordInfo gEasyChatGroup_Adjectives[] = {
    [EC_INDEX(EC_WORD_WANDERING)] =
    {
        .text = gEasyChatWord_Wandering,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_ANTICIPATION),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_WIMPY),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_RICKETY)] =
    {
        .text = gEasyChatWord_Rickety,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_AWESOME),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_SHREDDED),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ROCK_SOLID)] =
    {
        .text = gEasyChatWord_RockSolid,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_BREAK),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_SMOOTH),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HUNGRY)] =
    {
        .text = gEasyChatWord_Hungry,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_DESTROYED),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_SLIMY),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TIGHT)] =
    {
        .text = gEasyChatWord_Tight,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_DROOLING),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_ANTICIPATION),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TICKLISH)] =
    {
        .text = gEasyChatWord_Ticklish,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_EXCITING),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_AWESOME),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TWIRLING)] =
    {
        .text = gEasyChatWord_Twirling,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_FIERY),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_EXCITING),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SPIRALING)] =
    {
        .text = gEasyChatWord_Spiraling,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_HAPPILY),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_TICKLISH),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_THIRSTY)] =
    {
        .text = gEasyChatWord_Thirsty,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_HOPELESS),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_THIN),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LOLLING)] =
    {
        .text = gEasyChatWord_Lolling,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_HUNGRY),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_TIGHT),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SILKY)] =
    {
        .text = gEasyChatWord_Silky,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_INCREASING),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_WANDERING),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SADLY)] =
    {
        .text = gEasyChatWord_Sadly,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_LOLLING),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_THIRSTY),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HOPELESS)] =
    {
        .text = gEasyChatWord_Hopeless,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_LOVEY_DOVEY),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_LOLLING),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_USELESS)] =
    {
        .text = gEasyChatWord_Useless,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_RICKETY),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_HUNGRY),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DROOLING)] =
    {
        .text = gEasyChatWord_Drooling,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_RIPPED),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_VORACIOUS),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_EXCITING)] =
    {
        .text = gEasyChatWord_Exciting,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_ROCK_SOLID),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_HAPPILY),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_THICK)] =
    {
        .text = gEasyChatWord_Thick,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_SADLY),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_USELESS),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SMOOTH)] =
    {
        .text = gEasyChatWord_Smooth,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_SCATTER),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_YET),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SLIMY)] =
    {
        .text = gEasyChatWord_Slimy,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_SHAKY),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_HOPELESS),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_THIN)] =
    {
        .text = gEasyChatWord_Thin,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_SHREDDED),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_RIPPED),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BREAK)] =
    {
        .text = gEasyChatWord_Break,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_SILKY),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_DESTROYED),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_VORACIOUS)] =
    {
        .text = gEasyChatWord_Voracious,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_SLIMY),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_DROOLING),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SCATTER)] =
    {
        .text = gEasyChatWord_Scatter,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_SMOOTH),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_BREAK),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_AWESOME)] =
    {
        .text = gEasyChatWord_Awesome,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_SPIRALING),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_TWIRLING),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WIMPY)] =
    {
        .text = gEasyChatWord_Wimpy,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_THICK),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_SCATTER),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WOBBLY)] =
    {
        .text = gEasyChatWord_Wobbly,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_THIN),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_LOVEY_DOVEY),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SHAKY)] =
    {
        .text = gEasyChatWord_Shaky,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_THIRSTY),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_SADLY),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_RIPPED)] =
    {
        .text = gEasyChatWord_Ripped,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_TICKLISH),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_SHAKY),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SHREDDED)] =
    {
        .text = gEasyChatWord_Shredded,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_TIGHT),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_THICK),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_INCREASING)] =
    {
        .text = gEasyChatWord_Increasing,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_TWIRLING),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_ROCK_SOLID),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_YET)] =
    {
        .text = gEasyChatWord_Yet,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_USELESS),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_RICKETY),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DESTROYED)] =
    {
        .text = gEasyChatWord_Destroyed,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_VORACIOUS),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_SPIRALING),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FIERY)] =
    {
        .text = gEasyChatWord_Fiery,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_WANDERING),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_INCREASING),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LOVEY_DOVEY)] =
    {
        .text = gEasyChatWord_LoveyDovey,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_WIMPY),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_SILKY),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HAPPILY)] =
    {
        .text = gEasyChatWord_Happily,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_WOBBLY),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_FIERY),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ANTICIPATION)] =
    {
        .text = gEasyChatWord_Anticipation,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_YET),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_WOBBLY),
#endif
        .enabled = TRUE,
    },
};
