#if ENGLISH
const u8 gEasyChatWord_Highs[] = _("HIGHS");
const u8 gEasyChatWord_Lows[] = _("LOWS");
const u8 gEasyChatWord_Um[] = _("UM");
const u8 gEasyChatWord_Rear[] = _("REAR");
const u8 gEasyChatWord_Things[] = _("THINGS");
const u8 gEasyChatWord_Thing[] = _("THING");
const u8 gEasyChatWord_Below[] = _("BELOW");
const u8 gEasyChatWord_Above[] = _("ABOVE");
const u8 gEasyChatWord_Back[] = _("BACK");
const u8 gEasyChatWord_High[] = _("HIGH");
const u8 gEasyChatWord_Here[] = _("HERE");
const u8 gEasyChatWord_Inside[] = _("INSIDE");
const u8 gEasyChatWord_Outside[] = _("OUTSIDE");
const u8 gEasyChatWord_Beside[] = _("BESIDE");
const u8 gEasyChatWord_ThisIsItExcl[] = _("THIS IS IT!");
const u8 gEasyChatWord_This[] = _("THIS");
const u8 gEasyChatWord_Every[] = _("EVERY");
const u8 gEasyChatWord_These[] = _("THESE");
const u8 gEasyChatWord_TheseWere[] = _("THESE WERE");
const u8 gEasyChatWord_Down[] = _("DOWN");
const u8 gEasyChatWord_That[] = _("THAT");
const u8 gEasyChatWord_ThoseAre[] = _("THOSE ARE");
const u8 gEasyChatWord_ThoseWere[] = _("THOSE WERE");
const u8 gEasyChatWord_ThatsItExcl[] = _("THAT'S IT!");
const u8 gEasyChatWord_Am[] = _("AM");
const u8 gEasyChatWord_ThatWas[] = _("THAT WAS");
const u8 gEasyChatWord_Front[] = _("FRONT");
const u8 gEasyChatWord_Up[] = _("UP");
const u8 gEasyChatWord_Choice[] = _("CHOICE");
const u8 gEasyChatWord_Far[] = _("FAR");
const u8 gEasyChatWord_Away[] = _("AWAY");
const u8 gEasyChatWord_Near[] = _("NEAR");
const u8 gEasyChatWord_Where[] = _("WHERE");
const u8 gEasyChatWord_When[] = _("WHEN");
const u8 gEasyChatWord_What[] = _("WHAT");
const u8 gEasyChatWord_Deep[] = _("DEEP");
const u8 gEasyChatWord_Shallow[] = _("SHALLOW");
const u8 gEasyChatWord_Why[] = _("WHY");
const u8 gEasyChatWord_Confused[] = _("CONFUSED");
const u8 gEasyChatWord_Opposite[] = _("OPPOSITE");
const u8 gEasyChatWord_Left[] = _("LEFT");
const u8 gEasyChatWord_Right[] = _("RIGHT");
#elif GERMAN
const u8 gEasyChatWord_Highs[] = _("HÖHEN");
const u8 gEasyChatWord_Lows[] = _("TIEFEN");
const u8 gEasyChatWord_Um[] = _("ÄH");
const u8 gEasyChatWord_Rear[] = _("HINTEN");
const u8 gEasyChatWord_Things[] = _("SACHEN");
const u8 gEasyChatWord_Thing[] = _("DING");
const u8 gEasyChatWord_Below[] = _("UNTERHALB");
const u8 gEasyChatWord_Above[] = _("OBERHALB");
const u8 gEasyChatWord_Back[] = _("ZURÜCK");
const u8 gEasyChatWord_High[] = _("HOCH");
const u8 gEasyChatWord_Here[] = _("HIER");
const u8 gEasyChatWord_Inside[] = _("INNEN");
const u8 gEasyChatWord_Outside[] = _("AUSSEN");
const u8 gEasyChatWord_Beside[] = _("NEBEN");
const u8 gEasyChatWord_ThisIsItExcl[] = _("DAS IST ES!");
const u8 gEasyChatWord_This[] = _("DIES");
const u8 gEasyChatWord_Every[] = _("ALLES");
const u8 gEasyChatWord_These[] = _("DIESE");
const u8 gEasyChatWord_TheseWere[] = _("DIESE WAREN");
const u8 gEasyChatWord_Down[] = _("HINUNTER");
const u8 gEasyChatWord_That[] = _("DAS");
const u8 gEasyChatWord_ThoseAre[] = _("SCHON");
const u8 gEasyChatWord_ThoseWere[] = _("GENUG");
const u8 gEasyChatWord_ThatsItExcl[] = _("DAS IST’S!");
const u8 gEasyChatWord_Am[] = _("DAS SIND");
const u8 gEasyChatWord_ThatWas[] = _("DAS WAR");
const u8 gEasyChatWord_Front[] = _("VORNE");
const u8 gEasyChatWord_Up[] = _("OBEN");
const u8 gEasyChatWord_Choice[] = _("WAHL");
const u8 gEasyChatWord_Far[] = _("WEIT");
const u8 gEasyChatWord_Away[] = _("FORT");
const u8 gEasyChatWord_Near[] = _("NAHE");
const u8 gEasyChatWord_Where[] = _("WO");
const u8 gEasyChatWord_When[] = _("GLEICH");
const u8 gEasyChatWord_What[] = _("WAS");
const u8 gEasyChatWord_Deep[] = _("TIEF");
const u8 gEasyChatWord_Shallow[] = _("SEICHT");
const u8 gEasyChatWord_Why[] = _("WARUM");
const u8 gEasyChatWord_Confused[] = _("VERWIRRT");
const u8 gEasyChatWord_Opposite[] = _("GEGENÜBER");
const u8 gEasyChatWord_Left[] = _("LINKS");
const u8 gEasyChatWord_Right[] = _("RECHTS");
#endif

const struct EasyChatWordInfo gEasyChatGroup_Misc[] = {
    [EC_INDEX(EC_WORD_HIGHS)] =
    {
        .text = gEasyChatWord_Highs,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_ABOVE),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_UM),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LOWS)] =
    {
        .text = gEasyChatWord_Lows,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_AM),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_EVERY),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_UM)] =
    {
        .text = gEasyChatWord_Um,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_AWAY),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_OUTSIDE),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_REAR)] =
    {
        .text = gEasyChatWord_Rear,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_BACK),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_THAT),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_THINGS)] =
    {
        .text = gEasyChatWord_Things,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_BELOW),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_THIS_IS_IT_EXCL),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_THING)] =
    {
        .text = gEasyChatWord_Thing,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_BESIDE),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_THAT_S_IT_EXCL),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BELOW)] =
    {
        .text = gEasyChatWord_Below,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_CHOICE),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_AM),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ABOVE)] =
    {
        .text = gEasyChatWord_Above,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_CONFUSED),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_THAT_WAS),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BACK)] =
    {
        .text = gEasyChatWord_Back,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_DEEP),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_THIS),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HIGH)] =
    {
        .text = gEasyChatWord_High,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_DOWN),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_THESE),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HERE)] =
    {
        .text = gEasyChatWord_Here,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_EVERY),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_THESE_WERE),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_INSIDE)] =
    {
        .text = gEasyChatWord_Inside,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_FAR),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_THING),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_OUTSIDE)] =
    {
        .text = gEasyChatWord_Outside,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_FRONT),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_AWAY),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BESIDE)] =
    {
        .text = gEasyChatWord_Beside,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_HERE),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_OPPOSITE),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_THIS_IS_IT_EXCL)] =
    {
        .text = gEasyChatWord_ThisIsItExcl,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_HIGH),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_THOSE_WERE),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_THIS)] =
    {
        .text = gEasyChatWord_This,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_HIGHS),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_WHEN),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_EVERY)] =
    {
        .text = gEasyChatWord_Every,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_INSIDE),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_HERE),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_THESE)] =
    {
        .text = gEasyChatWord_These,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_LEFT),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_REAR),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_THESE_WERE)] =
    {
        .text = gEasyChatWord_TheseWere,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_LOWS),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_DOWN),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DOWN)] =
    {
        .text = gEasyChatWord_Down,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_NEAR),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_HIGH),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_THAT)] =
    {
        .text = gEasyChatWord_That,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_OPPOSITE),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_HIGHS),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_THOSE_ARE)] =
    {
        .text = gEasyChatWord_ThoseAre,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_OUTSIDE),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_INSIDE),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_THOSE_WERE)] =
    {
        .text = gEasyChatWord_ThoseWere,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_REAR),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_LEFT),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_THAT_S_IT_EXCL)] =
    {
        .text = gEasyChatWord_ThatsItExcl,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_RIGHT),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_NEAR),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_AM)] =
    {
        .text = gEasyChatWord_Am,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_SHALLOW),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_BESIDE),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_THAT_WAS)] =
    {
        .text = gEasyChatWord_ThatWas,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_THAT),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_UP),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FRONT)] =
    {
        .text = gEasyChatWord_Front,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_THAT_WAS),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_ABOVE),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_UP)] =
    {
        .text = gEasyChatWord_Up,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_THAT_S_IT_EXCL),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_RIGHT),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CHOICE)] =
    {
        .text = gEasyChatWord_Choice,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_THESE),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_THINGS),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FAR)] =
    {
        .text = gEasyChatWord_Far,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_THESE_WERE),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_THOSE_ARE),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_AWAY)] =
    {
        .text = gEasyChatWord_Away,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_THING),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_SHALLOW),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_NEAR)] =
    {
        .text = gEasyChatWord_Near,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_THINGS),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_DEEP),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WHERE)] =
    {
        .text = gEasyChatWord_Where,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_THIS),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_LOWS),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WHEN)] =
    {
        .text = gEasyChatWord_When,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_THIS_IS_IT_EXCL),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_BELOW),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WHAT)] =
    {
        .text = gEasyChatWord_What,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_THOSE_ARE),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_CONFUSED),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DEEP)] =
    {
        .text = gEasyChatWord_Deep,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_THOSE_WERE),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_FRONT),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SHALLOW)] =
    {
        .text = gEasyChatWord_Shallow,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_UM),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_CHOICE),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WHY)] =
    {
        .text = gEasyChatWord_Why,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_UP),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_WHY),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CONFUSED)] =
    {
        .text = gEasyChatWord_Confused,
        .alphabeticalOrder = EC_INDEX(EC_WORD_WHAT),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_OPPOSITE)] =
    {
        .text = gEasyChatWord_Opposite,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_WHEN),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_FAR),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LEFT)] =
    {
        .text = gEasyChatWord_Left,
        .alphabeticalOrder = EC_INDEX(EC_WORD_WHERE),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_RIGHT)] =
    {
        .text = gEasyChatWord_Right,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_WHY),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_BACK),
#endif
        .enabled = TRUE,
    },
};
