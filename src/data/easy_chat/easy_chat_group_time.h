#if ENGLISH
const u8 gEasyChatWord_Fall[] = _("FALL");
const u8 gEasyChatWord_Morning[] = _("MORNING");
const u8 gEasyChatWord_Tomorrow[] = _("TOMORROW");
const u8 gEasyChatWord_Last[] = _("LAST");
const u8 gEasyChatWord_Day[] = _("DAY");
const u8 gEasyChatWord_Sometime[] = _("SOMETIME");
const u8 gEasyChatWord_Always[] = _("ALWAYS");
const u8 gEasyChatWord_Current[] = _("CURRENT");
const u8 gEasyChatWord_Forever[] = _("FOREVER");
const u8 gEasyChatWord_Days[] = _("DAYS");
const u8 gEasyChatWord_End[] = _("END");
const u8 gEasyChatWord_Tuesday[] = _("TUESDAY");
const u8 gEasyChatWord_Yesterday[] = _("YESTERDAY");
const u8 gEasyChatWord_Today[] = _("TODAY");
const u8 gEasyChatWord_Friday[] = _("FRIDAY");
const u8 gEasyChatWord_Monday[] = _("MONDAY");
const u8 gEasyChatWord_Later[] = _("LATER");
const u8 gEasyChatWord_Earlier[] = _("EARLIER");
const u8 gEasyChatWord_Another[] = _("ANOTHER");
const u8 gEasyChatWord_Time[] = _("TIME");
const u8 gEasyChatWord_Finish[] = _("FINISH");
const u8 gEasyChatWord_Wednesday[] = _("WEDNESDAY");
const u8 gEasyChatWord_Soon[] = _("SOON");
const u8 gEasyChatWord_Start[] = _("START");
const u8 gEasyChatWord_Month[] = _("MONTH");
const u8 gEasyChatWord_Stop[] = _("STOP");
const u8 gEasyChatWord_Now[] = _("NOW");
const u8 gEasyChatWord_Final[] = _("FINAL");
const u8 gEasyChatWord_Next[] = _("NEXT");
const u8 gEasyChatWord_Age[] = _("AGE");
const u8 gEasyChatWord_Saturday[] = _("SATURDAY");
const u8 gEasyChatWord_Summer[] = _("SUMMER");
const u8 gEasyChatWord_Sunday[] = _("SUNDAY");
const u8 gEasyChatWord_Beginning[] = _("BEGINNING");
const u8 gEasyChatWord_Spring[] = _("SPRING");
const u8 gEasyChatWord_Daytime[] = _("DAYTIME");
const u8 gEasyChatWord_Winter[] = _("WINTER");
const u8 gEasyChatWord_Daily[] = _("DAILY");
const u8 gEasyChatWord_Olden[] = _("OLDEN");
const u8 gEasyChatWord_Almost[] = _("ALMOST");
const u8 gEasyChatWord_Nearly[] = _("NEARLY");
const u8 gEasyChatWord_Thursday[] = _("THURSDAY");
const u8 gEasyChatWord_Nighttime[] = _("NIGHTTIME");
const u8 gEasyChatWord_Night[] = _("NIGHT");
const u8 gEasyChatWord_Week[] = _("WEEK");
#elif GERMAN
const u8 gEasyChatWord_Fall[] = _("HERBST");
const u8 gEasyChatWord_Morning[] = _("MORGEN");
const u8 gEasyChatWord_Tomorrow[] = _("ÜBERMORGEN");
const u8 gEasyChatWord_Last[] = _("LETZTE(N)");
const u8 gEasyChatWord_Day[] = _("TAG");
const u8 gEasyChatWord_Sometime[] = _("IRGENDWANN");
const u8 gEasyChatWord_Always[] = _("IMMER");
const u8 gEasyChatWord_Current[] = _("MOMENTAN");
const u8 gEasyChatWord_Forever[] = _("EWIG");
const u8 gEasyChatWord_Days[] = _("TAGE");
const u8 gEasyChatWord_End[] = _("ENDE");
const u8 gEasyChatWord_Tuesday[] = _("DIENSTAG");
const u8 gEasyChatWord_Yesterday[] = _("GESTERN");
const u8 gEasyChatWord_Today[] = _("HEUTE");
const u8 gEasyChatWord_Friday[] = _("FREITAG");
const u8 gEasyChatWord_Monday[] = _("MONTAG");
const u8 gEasyChatWord_Later[] = _("SPÄTER");
const u8 gEasyChatWord_Earlier[] = _("FRÜHER");
const u8 gEasyChatWord_Another[] = _("AM ANDEREN");
const u8 gEasyChatWord_Time[] = _("ZEIT");
const u8 gEasyChatWord_Finish[] = _("SCHLUSS");
const u8 gEasyChatWord_Wednesday[] = _("MITTWOCH");
const u8 gEasyChatWord_Soon[] = _("BALD");
const u8 gEasyChatWord_Start[] = _("START");
const u8 gEasyChatWord_Month[] = _("MONAT");
const u8 gEasyChatWord_Stop[] = _("STOPP");
const u8 gEasyChatWord_Now[] = _("JETZT");
const u8 gEasyChatWord_Final[] = _("LETZTER");
const u8 gEasyChatWord_Next[] = _("NÄCHSTES");
const u8 gEasyChatWord_Age[] = _("ALTER");
const u8 gEasyChatWord_Saturday[] = _("SAMSTAG");
const u8 gEasyChatWord_Summer[] = _("SOMMER");
const u8 gEasyChatWord_Sunday[] = _("SONNTAG");
const u8 gEasyChatWord_Beginning[] = _("ANFANG");
const u8 gEasyChatWord_Spring[] = _("FRÜHLING");
const u8 gEasyChatWord_Daytime[] = _("TAGESZEIT");
const u8 gEasyChatWord_Winter[] = _("WINTER");
const u8 gEasyChatWord_Daily[] = _("TÄGLICH");
const u8 gEasyChatWord_Olden[] = _("DAMALS");
const u8 gEasyChatWord_Almost[] = _("FAST");
const u8 gEasyChatWord_Nearly[] = _("BEINAHE");
const u8 gEasyChatWord_Thursday[] = _("DONNERSTAG");
const u8 gEasyChatWord_Nighttime[] = _("BETTZEIT");
const u8 gEasyChatWord_Night[] = _("NACHT");
const u8 gEasyChatWord_Week[] = _("WOCHE");
#endif

const struct EasyChatWordInfo gEasyChatGroup_Time[] = {
    [EC_INDEX(EC_WORD_FALL)] =
    {
        .text = gEasyChatWord_Fall,
        .alphabeticalOrder = EC_INDEX(EC_WORD_AGE),
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MORNING)] =
    {
        .text = gEasyChatWord_Morning,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_ALMOST),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_ANOTHER),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TOMORROW)] =
    {
        .text = gEasyChatWord_Tomorrow,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_ALWAYS),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_BEGINNING),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LAST)] =
    {
        .text = gEasyChatWord_Last,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_ANOTHER),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_SOON),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DAY)] =
    {
        .text = gEasyChatWord_Day,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_BEGINNING),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_NEARLY),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SOMETIME)] =
    {
        .text = gEasyChatWord_Sometime,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_CURRENT),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_NIGHTTIME),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ALWAYS)] =
    {
        .text = gEasyChatWord_Always,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_DAILY),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_OLDEN),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_CURRENT)] =
    {
        .text = gEasyChatWord_Current,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_DAY),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_TUESDAY),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FOREVER)] =
    {
        .text = gEasyChatWord_Forever,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_DAYS),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_THURSDAY),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DAYS)] =
    {
        .text = gEasyChatWord_Days,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_DAYTIME),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_END),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_END)] =
    {
        .text = gEasyChatWord_End,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_EARLIER),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_FOREVER),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TUESDAY)] =
    {
        .text = gEasyChatWord_Tuesday,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_END),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_ALMOST),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_YESTERDAY)] =
    {
        .text = gEasyChatWord_Yesterday,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_FALL),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_FRIDAY),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TODAY)] =
    {
        .text = gEasyChatWord_Today,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_FINAL),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_EARLIER),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FRIDAY)] =
    {
        .text = gEasyChatWord_Friday,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_FINISH),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_SPRING),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MONDAY)] =
    {
        .text = gEasyChatWord_Monday,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_FOREVER),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_YESTERDAY),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_LATER)] =
    {
        .text = gEasyChatWord_Later,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_FRIDAY),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_FALL),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_EARLIER)] =
    {
        .text = gEasyChatWord_Earlier,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_LAST),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_TODAY),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ANOTHER)] =
    {
        .text = gEasyChatWord_Another,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_LATER),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_ALWAYS),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_TIME)] =
    {
        .text = gEasyChatWord_Time,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_MONDAY),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_SOMETIME),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FINISH)] =
    {
        .text = gEasyChatWord_Finish,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_MONTH),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_NOW),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WEDNESDAY)] =
    {
        .text = gEasyChatWord_Wednesday,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_MORNING),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_LAST),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SOON)] =
    {
        .text = gEasyChatWord_Soon,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_NEARLY),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_FINAL),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_START)] =
    {
        .text = gEasyChatWord_Start,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_NEXT),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_WEDNESDAY),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_MONTH)] =
    {
        .text = gEasyChatWord_Month,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_NIGHT),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_CURRENT),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_STOP)] =
    {
        .text = gEasyChatWord_Stop,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_NIGHTTIME),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_MONTH),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_NOW)] =
    {
        .text = gEasyChatWord_Now,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_NOW),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_MONDAY),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_FINAL)] =
    {
        .text = gEasyChatWord_Final,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_OLDEN),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_MORNING),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_NEXT)] =
    {
        .text = gEasyChatWord_Next,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_SATURDAY),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_NEXT),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_AGE)] =
    {
        .text = gEasyChatWord_Age,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_SOMETIME),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_NIGHT),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SATURDAY)] =
    {
        .text = gEasyChatWord_Saturday,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_SOON),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_SATURDAY),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SUMMER)] =
    {
        .text = gEasyChatWord_Summer,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_SPRING),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_FINISH),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SUNDAY)] =
    {
        .text = gEasyChatWord_Sunday,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_START),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_SUMMER),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_BEGINNING)] =
    {
        .text = gEasyChatWord_Beginning,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_STOP),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_SUNDAY),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_SPRING)] =
    {
        .text = gEasyChatWord_Spring,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_SUMMER),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_LATER),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DAYTIME)] =
    {
        .text = gEasyChatWord_Daytime,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_SUNDAY),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_START),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WINTER)] =
    {
        .text = gEasyChatWord_Winter,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_THURSDAY),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_STOP),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_DAILY)] =
    {
        .text = gEasyChatWord_Daily,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_TIME),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_DAY),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_OLDEN)] =
    {
        .text = gEasyChatWord_Olden,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_TODAY),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_DAYS),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_ALMOST)] =
    {
        .text = gEasyChatWord_Almost,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_TOMORROW),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_DAYTIME),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_NEARLY)] =
    {
        .text = gEasyChatWord_Nearly,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_TUESDAY),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_DAILY),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_THURSDAY)] =
    {
        .text = gEasyChatWord_Thursday,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_WEDNESDAY),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_TOMORROW),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_NIGHTTIME)] =
    {
        .text = gEasyChatWord_Nighttime,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_WEEK),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_WINTER),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_NIGHT)] =
    {
        .text = gEasyChatWord_Night,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_WINTER),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_WEEK),
#endif
        .enabled = TRUE,
    },
    [EC_INDEX(EC_WORD_WEEK)] =
    {
        .text = gEasyChatWord_Week,
#if ENGLISH
        .alphabeticalOrder = EC_INDEX(EC_WORD_YESTERDAY),
#elif GERMAN
        .alphabeticalOrder = EC_INDEX(EC_WORD_TIME),
#endif
        .enabled = TRUE,
    },
};
