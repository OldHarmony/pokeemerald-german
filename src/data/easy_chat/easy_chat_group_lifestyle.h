#if ENGLISH
const u8 gEasyChatWord_Chores[] = _("CHORES");
const u8 gEasyChatWord_Home[] = _("HOME");
const u8 gEasyChatWord_Money[] = _("MONEY");
const u8 gEasyChatWord_Allowance[] = _("ALLOWANCE");
const u8 gEasyChatWord_Bath[] = _("BATH");
const u8 gEasyChatWord_Conversation[] = _("CONVERSATION");
const u8 gEasyChatWord_School[] = _("SCHOOL");
const u8 gEasyChatWord_Commemorate[] = _("COMMEMORATE");
const u8 gEasyChatWord_Habit[] = _("HABIT");
const u8 gEasyChatWord_Group[] = _("GROUP");
const u8 gEasyChatWord_Word[] = _("WORD");
const u8 gEasyChatWord_Store[] = _("STORE");
const u8 gEasyChatWord_Service[] = _("SERVICE");
const u8 gEasyChatWord_Work[] = _("WORK");
const u8 gEasyChatWord_System[] = _("SYSTEM");
const u8 gEasyChatWord_Train[] = _("TRAIN");
const u8 gEasyChatWord_Class[] = _("CLASS");
const u8 gEasyChatWord_Lessons[] = _("LESSONS");
const u8 gEasyChatWord_Information[] = _("INFORMATION");
const u8 gEasyChatWord_Living[] = _("LIVING");
const u8 gEasyChatWord_Teacher[] = _("TEACHER");
const u8 gEasyChatWord_Tournament[] = _("TOURNAMENT");
const u8 gEasyChatWord_Letter[] = _("LETTER");
const u8 gEasyChatWord_Event[] = _("EVENT");
const u8 gEasyChatWord_Digital[] = _("DIGITAL");
const u8 gEasyChatWord_Test[] = _("TEST");
const u8 gEasyChatWord_DeptStore[] = _("DEPT. STORE");
const u8 gEasyChatWord_Television[] = _("TELEVISION");
const u8 gEasyChatWord_Phone[] = _("PHONE");
const u8 gEasyChatWord_Item[] = _("ITEM");
const u8 gEasyChatWord_Name[] = _("NAME");
const u8 gEasyChatWord_News[] = _("NEWS");
const u8 gEasyChatWord_Popular[] = _("POPULAR");
const u8 gEasyChatWord_Party[] = _("PARTY");
const u8 gEasyChatWord_Study[] = _("STUDY");
const u8 gEasyChatWord_Machine[] = _("MACHINE");
const u8 gEasyChatWord_Mail[] = _("MAIL");
const u8 gEasyChatWord_Message[] = _("MESSAGE");
const u8 gEasyChatWord_Promise[] = _("PROMISE");
const u8 gEasyChatWord_Dream[] = _("DREAM");
const u8 gEasyChatWord_Kindergarten[] = _("KINDERGARTEN");
const u8 gEasyChatWord_Life[] = _("LIFE");
const u8 gEasyChatWord_Radio[] = _("RADIO");
const u8 gEasyChatWord_Rental[] = _("RENTAL");
const u8 gEasyChatWord_World[] = _("WORLD");
#elif GERMAN
const u8 gEasyChatWord_Chores[] = _("PFLICHTEN");
const u8 gEasyChatWord_Home[] = _("HEIM");
const u8 gEasyChatWord_Money[] = _("GELD");
const u8 gEasyChatWord_Allowance[] = _("TASCHENGELD");
const u8 gEasyChatWord_Bath[] = _("BAD");
const u8 gEasyChatWord_Conversation[] = _("GESPRÄCH");
const u8 gEasyChatWord_School[] = _("SCHULE");
const u8 gEasyChatWord_Commemorate[] = _("GEDENKEN");
const u8 gEasyChatWord_Habit[] = _("GEWOHNHEIT");
const u8 gEasyChatWord_Group[] = _("GRUPPE");
const u8 gEasyChatWord_Word[] = _("WORT");
const u8 gEasyChatWord_Store[] = _("LAGER");
const u8 gEasyChatWord_Service[] = _("SERVICE");
const u8 gEasyChatWord_Work[] = _("ARBEIT");
const u8 gEasyChatWord_System[] = _("SYSTEM");
const u8 gEasyChatWord_Train[] = _("TRAINIEREN");
const u8 gEasyChatWord_Class[] = _("LEKTION");
const u8 gEasyChatWord_Lessons[] = _("UNTERRICHT");
const u8 gEasyChatWord_Information[] = _("INFORMATION");
const u8 gEasyChatWord_Living[] = _("LEBENDIG");
const u8 gEasyChatWord_Teacher[] = _("LEHRER");
const u8 gEasyChatWord_Tournament[] = _("TURNIER");
const u8 gEasyChatWord_Letter[] = _("BRIEF");
const u8 gEasyChatWord_Event[] = _("GESCHEHEN");
const u8 gEasyChatWord_Digital[] = _("DIGITALES");
const u8 gEasyChatWord_Test[] = _("TEST");
const u8 gEasyChatWord_DeptStore[] = _("KAUFHAUS");
const u8 gEasyChatWord_Television[] = _("FERNSEHER");
const u8 gEasyChatWord_Phone[] = _("TELEFON");
const u8 gEasyChatWord_Item[] = _("ITEM");
const u8 gEasyChatWord_Name[] = _("NAME");
const u8 gEasyChatWord_News[] = _("NEUIGKEITEN");
const u8 gEasyChatWord_Popular[] = _("POPULÄR");
const u8 gEasyChatWord_Party[] = _("PARTY");
const u8 gEasyChatWord_Study[] = _("LERNEN");
const u8 gEasyChatWord_Machine[] = _("MASCHINE");
const u8 gEasyChatWord_Mail[] = _("POST");
const u8 gEasyChatWord_Message[] = _("MITTEILUNG");
const u8 gEasyChatWord_Promise[] = _("VERSPRECHEN");
const u8 gEasyChatWord_Dream[] = _("TRAUM");
const u8 gEasyChatWord_Kindergarten[] = _("KINDERGARTEN");
const u8 gEasyChatWord_Life[] = _("LEBEN");
const u8 gEasyChatWord_Radio[] = _("RADIO");
const u8 gEasyChatWord_Rental[] = _("MIETE");
const u8 gEasyChatWord_World[] = _("WELT");
#endif

const struct EasyChatWordInfo gEasyChatGroup_Lifestyle[] = {
    [EC_INDEX(EC_WORD_CHORES)] =
    {
        .text = gEasyChatWord_Chores,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_ALLOWANCE),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_WORK),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HOME)] =
    {
        .text = gEasyChatWord_Home,
        .alphabeticalOrder = EC_INDEX(EC_WORD_BATH),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MONEY)] =
    {
        .text = gEasyChatWord_Money,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_CHORES),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_LETTER),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ALLOWANCE)] =
    {
        .text = gEasyChatWord_Allowance,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_CLASS),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_DIGITAL),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BATH)] =
    {
        .text = gEasyChatWord_Bath,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_COMMEMORATE),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_TELEVISION),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CONVERSATION)] =
    {
        .text = gEasyChatWord_Conversation,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_CONVERSATION),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_COMMEMORATE),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SCHOOL)] =
    {
        .text = gEasyChatWord_School,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_DEPT_STORE),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_MONEY),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_COMMEMORATE)] =
    {
        .text = gEasyChatWord_Commemorate,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_DIGITAL),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_EVENT),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HABIT)] =
    {
        .text = gEasyChatWord_Habit,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_DREAM),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_CONVERSATION),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GROUP)] =
    {
        .text = gEasyChatWord_Group,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_EVENT),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_HABIT),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WORD)] =
    {
        .text = gEasyChatWord_Word,
        .alphabeticalOrder = EC_INDEX(EC_WORD_GROUP),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_STORE)] =
    {
        .text = gEasyChatWord_Store,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_HABIT),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_HOME),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SERVICE)] =
    {
        .text = gEasyChatWord_Service,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_HOME),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_INFORMATION),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WORK)] =
    {
        .text = gEasyChatWord_Work,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_INFORMATION),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_ITEM),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SYSTEM)] =
    {
        .text = gEasyChatWord_System,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_ITEM),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_DEPT_STORE),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TRAIN)] =
    {
        .text = gEasyChatWord_Train,
        .alphabeticalOrder = EC_INDEX(EC_WORD_KINDERGARTEN),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CLASS)] =
    {
        .text = gEasyChatWord_Class,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_LESSONS),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_STORE),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LESSONS)] =
    {
        .text = gEasyChatWord_Lessons,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_LETTER),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_LIFE),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_INFORMATION)] =
    {
        .text = gEasyChatWord_Information,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_LIFE),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_LIVING),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LIVING)] =
    {
        .text = gEasyChatWord_Living,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_LIVING),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_TEACHER),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TEACHER)] =
    {
        .text = gEasyChatWord_Teacher,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_MACHINE),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_CLASS),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TOURNAMENT)] =
    {
        .text = gEasyChatWord_Tournament,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_MAIL),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_STUDY),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LETTER)] =
    {
        .text = gEasyChatWord_Letter,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_MESSAGE),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_MACHINE),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_EVENT)] =
    {
        .text = gEasyChatWord_Event,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_MONEY),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_RENTAL),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DIGITAL)] =
    {
        .text = gEasyChatWord_Digital,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_NAME),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_MESSAGE),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TEST)] =
    {
        .text = gEasyChatWord_Test,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_NEWS),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_NAME),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DEPT_STORE)] =
    {
        .text = gEasyChatWord_DeptStore,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_PARTY),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_NEWS),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TELEVISION)] =
    {
        .text = gEasyChatWord_Television,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_PHONE),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_PARTY),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_PHONE)] =
    {
        .text = gEasyChatWord_Phone,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_POPULAR),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_CHORES),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ITEM)] =
    {
        .text = gEasyChatWord_Item,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_PROMISE),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_POPULAR),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_NAME)] =
    {
        .text = gEasyChatWord_Name,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_RADIO),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_MAIL),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_NEWS)] =
    {
        .text = gEasyChatWord_News,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_RENTAL),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_RADIO),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_POPULAR)] =
    {
        .text = gEasyChatWord_Popular,
        .alphabeticalOrder = EC_INDEX(EC_WORD_SCHOOL),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_PARTY)] =
    {
        .text = gEasyChatWord_Party,
        .alphabeticalOrder = EC_INDEX(EC_WORD_SERVICE),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_STUDY)] =
    {
        .text = gEasyChatWord_Study,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_STORE),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_SYSTEM),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MACHINE)] =
    {
        .text = gEasyChatWord_Machine,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_STUDY),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_ALLOWANCE),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MAIL)] =
    {
        .text = gEasyChatWord_Mail,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_SYSTEM),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_PHONE),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MESSAGE)] =
    {
        .text = gEasyChatWord_Message,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_TEACHER),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_TEST),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_PROMISE)] =
    {
        .text = gEasyChatWord_Promise,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_TELEVISION),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_TRAIN),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DREAM)] =
    {
        .text = gEasyChatWord_Dream,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_TEST),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_DREAM),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_KINDERGARTEN)] =
    {
        .text = gEasyChatWord_Kindergarten,
        .alphabeticalOrder = EC_INDEX(EC_WORD_TOURNAMENT),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LIFE)] =
    {
        .text = gEasyChatWord_Life,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_TRAIN),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_LESSONS),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_RADIO)] =
    {
        .text = gEasyChatWord_Radio,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_WORD),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_PROMISE),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_RENTAL)] =
    {
        .text = gEasyChatWord_Rental,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_WORK),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_WORLD),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WORLD)] =
    {
        .text = gEasyChatWord_World,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_WORLD),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_WORD),
#endif
        .enabled = TRUE,
    },
};
