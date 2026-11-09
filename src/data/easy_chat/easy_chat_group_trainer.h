#if ENGLISH
const u8 gEasyChatWord_IChooseYou[] = _("I CHOOSE YOU");
const u8 gEasyChatWord_Gotcha[] = _("GOTCHA");
const u8 gEasyChatWord_Trade[] = _("TRADE");
const u8 gEasyChatWord_Sapphire[] = _("SAPPHIRE");
const u8 gEasyChatWord_Evolve[] = _("EVOLVE");
const u8 gEasyChatWord_Encyclopedia[] = _("ENCYCLOPEDIA");
const u8 gEasyChatWord_Nature[] = _("NATURE");
const u8 gEasyChatWord_Center[] = _("CENTER");
const u8 gEasyChatWord_Egg[] = _("EGG");
const u8 gEasyChatWord_Link[] = _("LINK");
const u8 gEasyChatWord_SpAbility[] = _("SP. ABILITY");
const u8 gEasyChatWord_Trainer[] = _("TRAINER");
const u8 gEasyChatWord_Version[] = _("VERSION");
const u8 gEasyChatWord_Pokenav[] = _("POKéNAV");
const u8 gEasyChatWord_Pokemon[] = _("POKéMON");
const u8 gEasyChatWord_Get[] = _("GET");
const u8 gEasyChatWord_Pokedex[] = _("POKéDEX");
const u8 gEasyChatWord_Ruby[] = _("RUBY");
const u8 gEasyChatWord_Level[] = _("LEVEL");
const u8 gEasyChatWord_Red[] = _("RED");
const u8 gEasyChatWord_Green[] = _("GREEN");
const u8 gEasyChatWord_Bag[] = _("BAG");
const u8 gEasyChatWord_Flame[] = _("FLAME");
const u8 gEasyChatWord_Gold[] = _("GOLD");
const u8 gEasyChatWord_Leaf[] = _("LEAF");
const u8 gEasyChatWord_Silver[] = _("SILVER");
const u8 gEasyChatWord_Emerald[] = _("EMERALD");
#elif GERMAN
const u8 gEasyChatWord_IChooseYou[] = _("DU BIST DRAN");
const u8 gEasyChatWord_Gotcha[] = _("HAB DICH");
const u8 gEasyChatWord_Trade[] = _("TAUSCH");
const u8 gEasyChatWord_Sapphire[] = _("SAPHIR");
const u8 gEasyChatWord_Evolve[] = _("ENTWICKELN");
const u8 gEasyChatWord_Encyclopedia[] = _("ENZYKLOPÄDIE");
const u8 gEasyChatWord_Nature[] = _("WESEN");
const u8 gEasyChatWord_Center[] = _("CENTER");
const u8 gEasyChatWord_Egg[] = _("EI");
const u8 gEasyChatWord_Link[] = _("LINK");
const u8 gEasyChatWord_SpAbility[] = _("FÄHIGKEIT");
const u8 gEasyChatWord_Trainer[] = _("TRAINER");
const u8 gEasyChatWord_Version[] = _("VERSION");
const u8 gEasyChatWord_Pokenav[] = _("POKéNAV");
const u8 gEasyChatWord_Pokemon[] = _("POKéMON");
const u8 gEasyChatWord_Get[] = _("BEKOMMEN");
const u8 gEasyChatWord_Pokedex[] = _("POKéDEX");
const u8 gEasyChatWord_Ruby[] = _("RUBIN");
const u8 gEasyChatWord_Level[] = _("LEVEL");
const u8 gEasyChatWord_Red[] = _("ROT");
const u8 gEasyChatWord_Green[] = _("GRÜN");
const u8 gEasyChatWord_Bag[] = _("BEUTEL");
const u8 gEasyChatWord_Flame[] = _("FLAMME");
const u8 gEasyChatWord_Gold[] = _("GOLD");
const u8 gEasyChatWord_Leaf[] = _("BLATT");
const u8 gEasyChatWord_Silver[] = _("SILBER");
const u8 gEasyChatWord_Emerald[] = _("SMARAGD");
#endif

const struct EasyChatWordInfo gEasyChatGroup_Trainer[] = {
    [EC_INDEX(EC_WORD_I_CHOOSE_YOU)] =
    {
        .text = gEasyChatWord_IChooseYou,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_BAG),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_GET),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GOTCHA)] =
    {
        .text = gEasyChatWord_Gotcha,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_CENTER),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_BAG),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TRADE)] =
    {
        .text = gEasyChatWord_Trade,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_EGG),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_LEAF),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SAPPHIRE)] =
    {
        .text = gEasyChatWord_Sapphire,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_EMERALD),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_CENTER),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_EVOLVE)] =
    {
        .text = gEasyChatWord_Evolve,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_ENCYCLOPEDIA),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_I_CHOOSE_YOU),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ENCYCLOPEDIA)] =
    {
        .text = gEasyChatWord_Encyclopedia,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_EVOLVE),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_EGG),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_NATURE)] =
    {
        .text = gEasyChatWord_Nature,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_FLAME),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_EVOLVE),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CENTER)] =
    {
        .text = gEasyChatWord_Center,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_GET),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_ENCYCLOPEDIA),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_EGG)] =
    {
        .text = gEasyChatWord_Egg,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_GOLD),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_SP_ABILITY),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LINK)] =
    {
        .text = gEasyChatWord_Link,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_GOTCHA),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_FLAME),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SP_ABILITY)] =
    {
        .text = gEasyChatWord_SpAbility,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_GREEN),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_GOLD),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TRAINER)] =
    {
        .text = gEasyChatWord_Trainer,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_I_CHOOSE_YOU),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_GREEN),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_VERSION)] =
    {
        .text = gEasyChatWord_Version,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_LEAF),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_GOTCHA),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_POKENAV)] =
    {
        .text = gEasyChatWord_Pokenav,
        .alphabeticalOrder = EC_INDEX(EC_WORD_LEVEL),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_POKEMON)] =
    {
        .text = gEasyChatWord_Pokemon,
        .alphabeticalOrder = EC_INDEX(EC_WORD_LINK),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GET)] =
    {
        .text = gEasyChatWord_Get,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_NATURE),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_POKEDEX),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_POKEDEX)] =
    {
        .text = gEasyChatWord_Pokedex,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_POKEDEX),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_POKEMON),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_RUBY)] =
    {
        .text = gEasyChatWord_Ruby,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_POKEMON),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_POKENAV),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LEVEL)] =
    {
        .text = gEasyChatWord_Level,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_POKENAV),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_RED),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_RED)] =
    {
        .text = gEasyChatWord_Red,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_RED),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_RUBY),
#endif
        .enabled = FALSE,
    },
    [EC_INDEX(EC_WORD_GREEN)] =
    {
        .text = gEasyChatWord_Green,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_RUBY),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_SAPPHIRE),
#endif
        .enabled = FALSE,
    },
    [EC_INDEX(EC_WORD_BAG)] =
    {
        .text = gEasyChatWord_Bag,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_SAPPHIRE),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_SILVER),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FLAME)] =
    {
        .text = gEasyChatWord_Flame,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_SILVER),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_EMERALD),
#endif
        .enabled = FALSE,
    },
    [EC_INDEX(EC_WORD_GOLD)] =
    {
        .text = gEasyChatWord_Gold,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_SP_ABILITY),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_TRADE),
#endif
        .enabled = FALSE,
    },
    [EC_INDEX(EC_WORD_LEAF)] =
    {
        .text = gEasyChatWord_Leaf,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_TRADE),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_TRAINER),
#endif
        .enabled = FALSE,
    },
    [EC_INDEX(EC_WORD_SILVER)] =
    {
        .text = gEasyChatWord_Silver,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_TRAINER),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_VERSION),
#endif
        .enabled = FALSE,
    },
    [EC_INDEX(EC_WORD_EMERALD)] =
    {
        .text = gEasyChatWord_Emerald,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_VERSION),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_NATURE),
#endif
        .enabled = TRUE,
    },
};
