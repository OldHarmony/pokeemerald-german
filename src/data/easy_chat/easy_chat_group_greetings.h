#if ENGLISH
const u8 gEasyChatWord_Thanks[] = _("THANKS");
const u8 gEasyChatWord_Yes[] = _("YES");
const u8 gEasyChatWord_HereGoes[] = _("HERE GOES");
const u8 gEasyChatWord_HereICome[] = _("HERE I COME");
const u8 gEasyChatWord_HereItIs[] = _("HERE IT IS");
const u8 gEasyChatWord_Yeah[] = _("YEAH");
const u8 gEasyChatWord_Welcome[] = _("WELCOME");
const u8 gEasyChatWord_Oi[] = _("OI");
const u8 gEasyChatWord_HowDo[] = _("HOW DO");
const u8 gEasyChatWord_Congrats[] = _("CONGRATS");
const u8 gEasyChatWord_GiveMe[] = _("GIVE ME");
const u8 gEasyChatWord_Sorry[] = _("SORRY");
const u8 gEasyChatWord_Apologize[] = _("APOLOGIZE");
const u8 gEasyChatWord_Forgive[] = _("FORGIVE");
const u8 gEasyChatWord_HeyThere[] = _("HEY, THERE");
const u8 gEasyChatWord_Hello[] = _("HELLO");
const u8 gEasyChatWord_GoodBye[] = _("GOOD-BYE");
const u8 gEasyChatWord_ThankYou[] = _("THANK YOU");
const u8 gEasyChatWord_IveArrived[] = _("I'VE ARRIVED");
const u8 gEasyChatWord_Pardon[] = _("PARDON");
const u8 gEasyChatWord_Excuse[] = _("EXCUSE");
const u8 gEasyChatWord_SeeYa[] = _("SEE YA");
const u8 gEasyChatWord_ExcuseMe[] = _("EXCUSE ME");
const u8 gEasyChatWord_WellThen[] = _("WELL, THEN");
const u8 gEasyChatWord_GoAhead[] = _("GO AHEAD");
const u8 gEasyChatWord_Appreciate[] = _("APPRECIATE");
const u8 gEasyChatWord_HeyQues[] = _("HEY?");
const u8 gEasyChatWord_WhatsUpQues[] = _("WHAT'S UP?");
const u8 gEasyChatWord_HuhQues[] = _("HUH?");
const u8 gEasyChatWord_No[] = _("NO");
const u8 gEasyChatWord_Hi[] = _("HI");
const u8 gEasyChatWord_YeahYeah[] = _("YEAH, YEAH");
const u8 gEasyChatWord_ByeBye[] = _("BYE-BYE");
const u8 gEasyChatWord_MeetYou[] = _("MEET YOU");
const u8 gEasyChatWord_Hey[] = _("HEY");
const u8 gEasyChatWord_Smell[] = _("SMELL");
const u8 gEasyChatWord_Listening[] = _("LISTENING");
const u8 gEasyChatWord_HooHah[] = _("HOO-HAH");
const u8 gEasyChatWord_Yahoo[] = _("YAHOO");
const u8 gEasyChatWord_Yo[] = _("YO");
const u8 gEasyChatWord_ComeOver[] = _("COME OVER");
const u8 gEasyChatWord_CountOn[] = _("COUNT ON");
#elif GERMAN
const u8 gEasyChatWord_Thanks[] = _("DANK");
const u8 gEasyChatWord_Yes[] = _("JA");
const u8 gEasyChatWord_HereGoes[] = _("HIER KOMMT");
const u8 gEasyChatWord_HereICome[] = _("HIER BIN ICH");
const u8 gEasyChatWord_HereItIs[] = _("HIER IST ES");
const u8 gEasyChatWord_Yeah[] = _("YEAH");
const u8 gEasyChatWord_Welcome[] = _("WILLKOMMEN");
const u8 gEasyChatWord_Oi[] = _("AU");
const u8 gEasyChatWord_HowDo[] = _("WIE");
const u8 gEasyChatWord_Congrats[] = _("GLÜCKWUNSCH");
const u8 gEasyChatWord_GiveMe[] = _("GIB");
const u8 gEasyChatWord_Sorry[] = _("SORRY");
const u8 gEasyChatWord_Apologize[] = _("VERZEIHUNG");
const u8 gEasyChatWord_Forgive[] = _("SCHON GUT");
const u8 gEasyChatWord_HeyThere[] = _("HEY DA");
const u8 gEasyChatWord_Hello[] = _("HALLO");
const u8 gEasyChatWord_GoodBye[] = _("TSCHÜSS");
const u8 gEasyChatWord_ThankYou[] = _("DANKE SCHÖN");
const u8 gEasyChatWord_IveArrived[] = _("ICH BIN DA");
const u8 gEasyChatWord_Pardon[] = _("PARDON");
const u8 gEasyChatWord_Excuse[] = _("TAGCHEN");
const u8 gEasyChatWord_SeeYa[] = _("BIS DANN");
const u8 gEasyChatWord_ExcuseMe[] = _("ENTSCHULDIGE");
const u8 gEasyChatWord_WellThen[] = _("NUN, DANN");
const u8 gEasyChatWord_GoAhead[] = _("WEITER SO");
const u8 gEasyChatWord_Appreciate[] = _("SCHÄTZEN");
const u8 gEasyChatWord_HeyQues[] = _("HEY?");
const u8 gEasyChatWord_WhatsUpQues[] = _("WAS IST LOS?");
const u8 gEasyChatWord_HuhQues[] = _("WIE?");
const u8 gEasyChatWord_No[] = _("NEIN");
const u8 gEasyChatWord_Hi[] = _("TAG AUCH");
const u8 gEasyChatWord_YeahYeah[] = _("YEAH, YEAH");
const u8 gEasyChatWord_ByeBye[] = _("TSCHAU");
const u8 gEasyChatWord_MeetYou[] = _("BIS BALD");
const u8 gEasyChatWord_Hey[] = _("HEY");
const u8 gEasyChatWord_Smell[] = _("GERUCH");
const u8 gEasyChatWord_Listening[] = _("HÖR ZU");
const u8 gEasyChatWord_HooHah[] = _("HUH HAH");
const u8 gEasyChatWord_Yahoo[] = _("JUCHUU");
const u8 gEasyChatWord_Yo[] = _("JEPP");
const u8 gEasyChatWord_ComeOver[] = _("ACH, KOMM");
const u8 gEasyChatWord_CountOn[] = _("ZÄHLEN AUF");
#endif

const struct EasyChatWordInfo gEasyChatGroup_Greetings[] = {
    [EC_INDEX(EC_WORD_THANKS)] =
    {
        .text = gEasyChatWord_Thanks,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_APOLOGIZE),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_COME_OVER),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_YES)] =
    {
        .text = gEasyChatWord_Yes,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_APPRECIATE),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_OI),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HERE_GOES)] =
    {
        .text = gEasyChatWord_HereGoes,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_BYE_BYE),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_MEET_YOU),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HERE_I_COME)] =
    {
        .text = gEasyChatWord_HereICome,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_COME_OVER),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_SEE_YA),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HERE_IT_IS)] =
    {
        .text = gEasyChatWord_HereItIs,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_CONGRATS),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_THANKS),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_YEAH)] =
    {
        .text = gEasyChatWord_Yeah,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_COUNT_ON),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_THANK_YOU),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WELCOME)] =
    {
        .text = gEasyChatWord_Welcome,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_EXCUSE),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_EXCUSE_ME),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_OI)] =
    {
        .text = gEasyChatWord_Oi,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_EXCUSE_ME),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_SMELL),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HOW_DO)] =
    {
        .text = gEasyChatWord_HowDo,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_FORGIVE),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_GIVE_ME),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CONGRATS)] =
    {
        .text = gEasyChatWord_Congrats,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_GIVE_ME),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_CONGRATS),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GIVE_ME)] =
    {
        .text = gEasyChatWord_GiveMe,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_GO_AHEAD),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_HELLO),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SORRY)] =
    {
        .text = gEasyChatWord_Sorry,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_GOOD_BYE),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_HEY),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_APOLOGIZE)] =
    {
        .text = gEasyChatWord_Apologize,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_HELLO),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_HEY_THERE),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FORGIVE)] =
    {
        .text = gEasyChatWord_Forgive,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_HERE_GOES),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_HEY_QUES),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HEY_THERE)] =
    {
        .text = gEasyChatWord_HeyThere,
        .alphabeticalOrder = EC_INDEX(EC_WORD_HERE_I_COME),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HELLO)] =
    {
        .text = gEasyChatWord_Hello,
        .alphabeticalOrder = EC_INDEX(EC_WORD_HERE_IT_IS),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GOOD_BYE)] =
    {
        .text = gEasyChatWord_GoodBye,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_HEY),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_HERE_GOES),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_THANK_YOU)] =
    {
        .text = gEasyChatWord_ThankYou,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_HEY_THERE),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_LISTENING),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_I_VE_ARRIVED)] =
    {
        .text = gEasyChatWord_IveArrived,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_HEY_QUES),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_HOO_HAH),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_PARDON)] =
    {
        .text = gEasyChatWord_Pardon,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_HI),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_I_VE_ARRIVED),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_EXCUSE)] =
    {
        .text = gEasyChatWord_Excuse,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_HOO_HAH),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_YES),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SEE_YA)] =
    {
        .text = gEasyChatWord_SeeYa,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_HOW_DO),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_YO),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_EXCUSE_ME)] =
    {
        .text = gEasyChatWord_ExcuseMe,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_HUH_QUES),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_YAHOO),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WELL_THEN)] =
    {
        .text = gEasyChatWord_WellThen,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_I_VE_ARRIVED),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_NO),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_GO_AHEAD)] =
    {
        .text = gEasyChatWord_GoAhead,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_LISTENING),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_WELL_THEN),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_APPRECIATE)] =
    {
        .text = gEasyChatWord_Appreciate,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_MEET_YOU),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_PARDON),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HEY_QUES)] =
    {
        .text = gEasyChatWord_HeyQues,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_NO),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_APPRECIATE),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WHAT_S_UP_QUES)] =
    {
        .text = gEasyChatWord_WhatsUpQues,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_OI),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_FORGIVE),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HUH_QUES)] =
    {
        .text = gEasyChatWord_HuhQues,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_PARDON),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_SORRY),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_NO)] =
    {
        .text = gEasyChatWord_No,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_SEE_YA),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_HI),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HI)] =
    {
        .text = gEasyChatWord_Hi,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_SMELL),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_EXCUSE),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_YEAH_YEAH)] =
    {
        .text = gEasyChatWord_YeahYeah,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_SORRY),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_BYE_BYE),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BYE_BYE)] =
    {
        .text = gEasyChatWord_ByeBye,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_THANK_YOU),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_GOOD_BYE),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MEET_YOU)] =
    {
        .text = gEasyChatWord_MeetYou,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_THANKS),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_APOLOGIZE),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HEY)] =
    {
        .text = gEasyChatWord_Hey,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_WELCOME),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_WHAT_S_UP_QUES),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SMELL)] =
    {
        .text = gEasyChatWord_Smell,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_WELL_THEN),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_GO_AHEAD),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LISTENING)] =
    {
        .text = gEasyChatWord_Listening,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_WHAT_S_UP_QUES),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_HOW_DO),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_HOO_HAH)] =
    {
        .text = gEasyChatWord_HooHah,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_YAHOO),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_HUH_QUES),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_YAHOO)] =
    {
        .text = gEasyChatWord_Yahoo,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_YEAH),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_WELCOME),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_YO)] =
    {
        .text = gEasyChatWord_Yo,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_YEAH_YEAH),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_YEAH),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_COME_OVER)] =
    {
        .text = gEasyChatWord_ComeOver,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_YES),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_YEAH_YEAH),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_COUNT_ON)] =
    {
        .text = gEasyChatWord_CountOn,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_YO),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_COUNT_ON),
#endif
        .enabled = TRUE,
    },
};
