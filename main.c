#include <stdio.h>
#include <windows.h>
#include <ctype.h>
#include <stdlib.h>
#include<dos.h>                     //contains _dos_getdate
#include<time.h>
#include<string.h>
#include<math.h>

double tes=0;
struct heirs{
    int type;
    int number;
    double share;
    struct heirs *next;
};

void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

void homescreen(){

system("cls");

    printf("\n *****************************************************************************");
    printf("\n ************************************** **************************************");
    printf("\n *************************************   *************************************");
    printf("\n ************************************     ************************************");
    printf("\n ***********************************       ***********************************");
    printf("\n **********************************         **********************************");
    printf("\n *********************************           *********************************");
    printf("\n ********************************             ********************************");
    printf("\n *******************************               *******************************");
    printf("\n ******************************                 ******************************");
    printf("\n *****************************                   *****************************");
    printf("\n ****************************                     ****************************");
    printf("\n ***************************                       ***************************");
    printf("\n **************************                         **************************");
    printf("\n *************************                           *************************");
    printf("\n ************************                             ************************");
    printf("\n ***********************                               ***********************");
    printf("\n **********************                                 **********************");
    printf("\n *********************                                   *********************");
    printf("\n ********************                                     ********************");
    printf("\n *******************                                       *******************");
    printf("\n ******************                                         ******************");
    printf("\n *****************                                           *****************");
    printf("\n ****************                                             ****************");
    printf("\n ***************                                               ***************");
    printf("\n **************                                                 **************");
    printf("\n *************                                                   *************");
    printf("\n ************                                                     ************");
    printf("\n ***********                                                       ***********");
    printf("\n **********                                                         **********");
    printf("\n *********                                                           *********");
    printf("\n ********   @     @@@   @@@     @    @      @    @     @   @   @      ********");
    printf("\n *******   @ @    @     @      @ @   @     @ @   @ @ @ @   @   @       *******");
    printf("\n ******   @@@@@   @@@   @@@   @@@@@  @    @@@@@  @  @  @   @   @        ******");
    printf("\n *****   @     @    @     @   @   @  @    @   @  @     @   @   @         *****");
    printf("\n ****    @     @  @@@   @@@   @   @  @@@@ @   @  @     @   @ @ @          ****");
    printf("\n ***                                                                       ***");
    printf("\n **                  @     @      @    @@@@@  @   @   @   @  @     @        **");
    printf("\n *                  @ @    @     @ @     @    @  @    @   @  @ @ @ @         *");
    printf("\n                   @@@@@   @    @@@@@    @    @ @     @   @  @  @  @          ");
    printf("                     @   @   @    @   @    @    @  @    @   @  @     @          ");
    printf("                     @   @   @@@@ @   @  @@@@@  @   @   @ @ @  @     @          ");
    printf("                                                                                ");

    delay(3000);
    system("cls");

    puts("\n\t\t WELCOME TO ISLAMIC FARAYED\n\t\t\t") ;
    //  printf("\n *****************************************************************************");
    printf("\n *****************************************************************************");

    printf("\n *                                                                           *");
    printf("\n *                                                                           *");
    printf("\n *                                                                           *");
    printf("\n *                                                                           *");
    printf("\n *                          C             F                                  *");
    printf("\n *                      I                        A                           *");
    printf("\n *                 M                                  R                      *");
    printf("\n *             A                                          A                  *");
    printf("\n *          L                                                  Y             *");
    printf("\n *      S                                                         E          *");
    printf("\n *   I                                                                D      *");
    printf("\n *                                                                           *");
    printf("\n *                                                                           *");
    printf("\n *                                                                           *");
    printf("\n *                  @@@@@(The Succession Law)@@@@@                           *");
    printf("\n *                                                                           *");
    printf("\n *****************************************************************************");
    puts("\n                      -------------------------------                           ");
    delay(3000);
}

void viewQuran(){

        system("cls");
        puts("\n\t\t\t** ** ** AL QURAN ** ** **");
        puts("\n\n\t\t\t  ***** SURA NISA *****");

        puts("\n\n7. There is a share for men and a share for women from what is left by parents and those nearest related, whether, the property be small or large - a legal share.");

        puts("\n8. And when the relatives and the orphans and Al-Masakin (the poor) are present at the time of division, give them out of the property, and speak to them words of kindness and justice.");

        puts("\n11. Allah commands you as regards your children's (inheritance); to the male, a portion equal to that of two females; if (there are) only daughters, two or more, their share is two thirds of the inheritance; if only one, her share is half. For parents, a sixth share of inheritance to each if the deceased left children; if no children, and the parents are the (only) heirs, the mother has a third; if the deceased left brothers or (sisters), the mother has a sixth. (The distribution in all cases is) after the payment of legacies he may have bequeathed or debts. You know not which of them, whether your parents or your children, are nearest to you in benefit, (these fixed shares) are ordained by Allah. And Allah is Ever All-Knower, All-Wise.");

        puts("\n12. In that which your wives leave, your share is a half if they have no child; but if they leave a child, you get a fourth of that which they leave after payment of legacies that they may have bequeathed or debts. In that which you leave, their (your wives) share is a fourth if you leave no child; but if you leave a child, they get an eighth of that which you leave after payment of legacies that you may have bequeathed or debts. If the man or woman whose inheritance is in question has left neither ascendants nor descendants, but has left a brother or a sister, each one of the two gets a sixth; but if more than two, they share in a third; after payment of lagacies he (or she) may have bequeathed or debts, so that no loss is caused (to anyone). This is a Commandment from Allah; and Allah is Ever All-Knowing, Most-Forbearing.");

        puts("\n14. And whosoever disobeys Allah and His Messenger (Muhammad ), and transgresses His limits, He will cast him into the Fire, to abide therein; and he shall have a disgraceful torment.");

        puts("\n 33. And to everyone, We have appointed heirs of that (property) left by parents and relatives. To those also with whom you have made a pledge (brotherhood), give them their due portion (by Wasiya - wills, etc.). Truly, Allah is Ever a Witness over all things. ");

        puts("\n 176. . They ask you for a legal verdict. Say: \"Allah directs (thus) about Al-Kalalah (those who leave neither descendants nor ascendants as heirs). If it is a man that dies, leaving a sister, but no child, she shall have half the inheritance. If (such a deceased was) a woman, who left no child, her brother takes her inheritance. If there are two sisters, they shall have two-thirds of the inheritance; if there are brothers and sisters, the male will have twice the share of the female. (Thus) does Allah makes clear to you (His Law) lest you go astray. And Allah is the All-Knower of everything.\"");


        puts("\n\n\t\t\t***** AL-MA’IDAH *****");

        puts("\n\n 106. O you who believe! When death approaches any of you, and you make a bequest, then take the testimony of two just men of your own folk or two others from outside, if you are travelling through the land and the calamity of death befalls you. Detain them both after As-Salat (the prayer), (then) if you are in doubt (about their truthfulness), let them both swear by Allah (saying): \"We wish not for any worldly gain in this, even though he (the beneficiary) be our near relative. We shall not hide Testimony of Allah, for then indeed we should be of the sinful.\"");

        puts("\n\n107. If then it gets known that these two had been guilty of sin, let two others stand forth in their places, nearest in kin from among those who claim a lawful right. Let them swear by Allah (saying): \"We affirm that our testimony is truer than that of both of them, and that we have not trespassed (the truth), for then indeed we should be of the wrong-doers.\"");

        puts("\n\n\t\t\t***** AL-ANFAL *****");

        puts("\n 75. And those who believed afterwards, and emigrated and strove hard along with you, (in the Cause of Allah) they are of you. But kindred by blood are nearer to one another regarding inheritance in the decree ordained by Allah. Verily, Allah is the All-Knower of everything.");

        puts("\n\n\n\t\t\t***** AL-BAQARAH *****");

        puts("\n 180. It is prescribed for you, when death approaches any of you, if he leaves wealth, that he make a bequest to parents and next of kin, according to reasonable manners. (This is) a duty upon Al-Muttaqun (the pious ).");

        puts("\n181. Then whoever changes the bequest after hearing it, the sin shall be on those who make the change. Truly, Allah is All-Hearer, All-Knower.");

        puts("\n182. But he who fears from a testator some unjust act or wrong-doing, and thereupon he makes peace between the parties concerned, there shall be no sin on him. Certainly, Allah is Oft-Forgiving, Most Merciful.");
        getch();
}

void viewHadith(){

        system("cls");
        printf("\n\t\t\t** ** ** AL HADITH ** ** **");

        puts("\n\n\t\t\t  ***** SAHIH BUKHARI *****");

        puts("\n\n1. Narrated 'Aisha: \n\tFatima and Al 'Abbas came to Abu Bakr, seeking their share from the property of Allah's Apostle and at that time, they were asking for their land at Fadak and their share from Khaibar. Abu Bakr said to them,\" I have heard from Allah's Apostle saying, 'Our property cannot be inherited, and whatever we leave is to be spent in charity, but the family of Muhammad may take their provisions from this property.\" Abu Bakr added, \"By Allah, I will not leave the procedure I saw Allah's Apostle following during his lifetime concerning this property.\" Therefore Fatima left Abu Bakr and did not speak to him till she died.");

        puts("\n\n2. Narrated Abu Huraira:\n\tThe Prophet said, \"I am more closer to the believers than their own selves, so whoever (of them) dies while being in debt and leaves nothing for its repayment, then we are to pay his debts on his behalf and whoever (among the believers) dies leaving some property, then that property is for his heirs.\"");

        puts("\n\n3. Narrated Ibn 'Abbas: \n\tThe Prophet said,\"Give the Fara'id (the shares of the inheritance that are prescribed in the Qur'an) to those who are entitled to receive it. Then whatever remains, should be given to the closest male relative of the deceased .\" ");

        puts("\n\n4. Narrated Sa'd bin Abi Waqqas: \n\tI was stricken by an ailment that led me to the verge of death. The Prophet came to pay me a visit. I said,\"O Allah's Apostle! I have much property and no heir except my single daughter. Shall I give two-thirds of my property in charity?\" He said, \"No.\" I said, \"Half of it?\" He said, \"No.\" I said,\"One-third of it?\" He said,\"You may do so) though one-third is also to a much, for it is better for you to leave your off-spring wealthy than to leave them poor, asking others for help. And whatever you spend (for Allah's sake) you will be rewarded for it, even for a morsel of food which you may put in the mouth of your wife.\" I said, \"O Allah's Apostle! Will I remain behind and fail to complete my emigration?\" The Prophet said, \"If you are left behind after me, whatever good deeds you will do for Allah's sake, that will upgrade you and raise you high. May be you will have long life so that some people may benefit by you and others (the enemies) be harmed by you.\" But Allah's Apostle felt sorry for Sa'd bin Khaula as he died in Mecca. (Sufyan, a sub-narrator said that Sa'd bin Khaula was a man from the tribe of Bani 'Amir bin Lu'ai.) ");

        puts("\n\n5. Narrated Al-Aswad bin Yazid: \n\tMu'adh bin Jabal came to us in Yemen as a tutor and a ruler, and we (the people of Yemen) asked him about (the distribution of the property of ) a man who had died leaving a daughter and a sister. Mu'adh gave the daughter one-half of the property and gave the sister the other half.");

        puts("\n\n6. Narrated Huzail bin Shirahbil: \n\tAbu Musa was asked regarding (the inheritance of) a daughter, a son's daughter, and a sister. He said \"The daughter will take one-half and the sister will take one-half. If you go to Ibn Mas'ud, he will tell you the same.\" Ibn Mas'ud was asked and was told of Abu Musa's verdict. Ibn Mas'ud then said,\"If I give the same verdict, I would stray and would not be of the rightly-guided. The verdict I will give in this case, will be the same as the Prophet did, i.e. one-half is for daughter, and one-sixth for the son's daughter, i.e. both shares make two-thirds of the total property; and the rest is for the sister.\" Afterwards we cams to Abu Musa and informed him of Ibn Mas'ud's verdict, whereupon he said,\"So, do not ask me for verdicts, as long as this learned man is among you.\"");

        puts("\n\n7. Narrated Ibn 'Abbas: \n\t(During the early days of Islam), the inheritance used to be given to one's offspring and legacy used to be bequeathed to the parents, then Allah cancelled what He wished from that order and decreed that the male should be given the equivalent of the portion of two females, and for the parents one-sixth for each of them, and for one's wife one-eighth (if the deceased has children) and one-fourth (if he has no children), for one's husband one-half (if the deceased has no children) and one-fourth (if she has children).\"");

        puts("\n\n8. Narrated Huzail: \n\t'Abdullah said,\"The judgment I will give in this matter will be like the judgment of the Prophet, i.e. one-half is for the daughter and one-sixth for the son's daughter and the rest of the inheritance for the sister.\"");


        puts("\n\n9. Narrated Abu Huraira: \n\tAllah's Apostle said,\"I am more closer to the believers than their ownselves, so whoever (among them) dies leaving some inheritance, his inheritance will be given to his 'Asaba, and whoever dies leaving a debt or dependants or destitute children, then I am their supporter.\"");

        puts("\n\n10. Narrated Ibn 'Abbas: regarding the Holy Verse:--'And to everyone, We have appointed heirs:\n\tWhen the emigrants came to Medina, the Ansar used to be the heir of the emigrants (and vice versa) instead of their own kindred by blood (Dhawl-l-arham), and that was because of the bond of brotherhood which the Prophet had established between them, i.e. the Ansar and the emigrants. But when the Divine Verse:-- \n'And to everyone We have appointed heirs,' (4.33) was revealed, it cancelled the other, order i.e. 'To those also, to whom Your right hands have pledged.'");

        puts("\n\n11. Narrated 'Aisha: \n\t'Utba (bin Abi Waqqas) said to his brother Sa'd,\"The son of the slave girl of Zam'a is my son, so be his custodian.\" So when it was the year of the Conquest of Mecca, Sa'd took that child and said,\"He is my nephew, and my brother told me to be his custodian.\" On that, 'Abu bin Zam'a got up and said, 'but the child is my brother, and the son of my father's slave girl as he was born on his bed.\" So they both went to the Prophet. Sa'd said, \"O Allah's Apostle! (This is) the son of my brother and he told me to be his custodian.\" Then 'Abu bin Zam'a said,\"(But he is) my brother and the son of the slave girl of my father, born on his bed.\" The Prophet said, \"This child is for you. O 'Abu bin Zam'a, as the child is for the owner of the bed, and the adulterer receives the stones.\" He then ordered (his wife) Sauda bint Zam'a to cover herself before that boy as he noticed the boy's resemblance to 'Utba. Since then the boy had never seen Sauda till he died.");

        puts("\n\n12.Narrated Usama bin Zaid: \n\tthe Prophet said, \"A Muslim cannot be the heir of a disbeliever, nor can a disbeliever be the heir of a Muslim.\"");

        puts("\n\n\t\t\t  *****SAHIH MUSLIM*****");

        puts("\n\n1. Jabir b. 'Abdullah (Allah be pleased with them) reported: \n\tWhile I had been ill Allah's Messenger (may peace be upon him) visited me and Abu akr (Allah be pleased with him) was with him, and they both came walking on foot. He (the Holy Prophet) found me unconscious. Allahs Messenger (may peace be upon him) performed ablution and then sprinkled over me the water of his ablution. I felt relieved regained my consciousness) and found Allah's Messenger (may peace be upon him) there. I said:Allah's Messenger, what should I do with my property ? He gave me no reply until the verse (iv. 177) relating to the law of inheritance was revealed.");

        puts("\n\n2. Abu Talha reported: 'Umar b. al-Khattab (Allah be pleased with him) delivered a sermon on Friday and made a mention of Allah's Apostle (may peace be upon him) and he also made a mention of Abu Bakr (Allah be pleased with him) and then said: I do not leave behind me any problem more difficult than that of Kalala(THE PERSON WHO DIES LEAVING NO CHILD OR PARENT). I did not refer to Allah's Messenger (may peace be upon him) more repeatedly than in case of the problem of Kalala, and he (the Holy Prophet) never showed more annoyance to me than in regard to this problem, so much so that he struck my chest with his fingers and said: 'Umar, does the verse revealed in summer season, at the end of Sura al-Nisa' not suffice you ? Hadrat 'Umar (then) said : If I live I would give such verdict about (Kalala) that everyone would be able to decide whether he reads the Qur'an or he does not.");

        puts("\n\n3. Abu Huraira (Allah be pleased with him) reported that when the body of a dead person having burden of debt upon him was brought to Allah's Messenger(may peace be upon him) he would ask whether he had left property enough to clear off his debt, and if the property left had been sufficient for that (purpose), he observed funeral prayer for him, otherwise he said (to his companions): You observe prayer for your companion. But when Allah opened the gateways of victory for him, he said: I am nearer to the believers than themselves, so if anyone dies leaving a debt, its payment is my responsibility, and if anyone leaves a property, it goes to his heirs.");
        getch();
}

void viewHeirs(){

system("cls");
        puts("\n\t\t\t ***** LIST OF HEIRS *****");

        puts("\n\nAccording to Islam, the heirs have been divided into three classes.\n\n(A) DHAW-U'L-FARA'ID(Primary/Immediate Heirs):\n \n\tThese are those persons who have a right to definite shares in assets left by the deceased.\n\tThese sharers are twelve in number;\n\nFour males:\n\t1. Father,\n\t2. Grandfather,\n\t3. Meternal(uterine) brothers and\n\t4.  Husband;\n\nEight females:\n\t1. Wife\n\t2. Daughter\n\t3. Son's daughter\n\t4. Mother\n\t5. Grandmother\n\t6. Full sistesr\n\t7. Peternal(Consanguine) sisters\n\t8. Meternal(uterine) sisters. ");

        puts("\n\n\n(B)ASABAT:\n\n\tWhen the heirs of the first group have received the respective shares, the residue of the assets falls to the share of those relatives who are called Asaba which, according to the Shari'ah, implies those relatives in whose line of relationship no female enters. This is the second group of inheritors. \n\t There is no fixed share of the 'Asabat. If the deceased is not survived by any Dhaw-u'l-Fara'id, the whole of the property falls to their share; and If Dhaw-u'I.Fara'id are there to get their due share, the residue will be taken by the Asabat. The following are the 'Asabat: ");

        puts("\n\t1. Son: He is the first to get the residue in order of succession. The daughters are entitled to half of the share as given to the son. The grandsons are not entitled to any share in the presence of the son. If the son is not living, then the grandson is entitled to a share in the inheritance. If there are more than one son, the inheritance will be distributed equally amongst them.");

        puts("\n\t2. The father, grandfather and the great-grandfather are included in the category of Dhaw-u'l-Fara'id. If, however, the deceased is not survived by category of a son, grandson of great-grandson, then the father will fall under the category of 'Asaba, and, in the absence of the father, the grandfather assumes that position.");

        puts("\n\t3. If the deceased is not survived by son, or grandson or father or grandfather, i.e. none amongst the 'Asabat, then the brother, and in the absence of brother his son, and in the absence of son, his grandson will be entitled to share in the inheritance as 'Asaba and the female would also join them in share claiming half of the share as compared with male. ");

        puts("\n\t4. If unfortunately the deceased is survived by none of the above-mentioned relatives amongst the 'Asabat, then consanguine brother will be entitled to share in the inheritance and he will be preferred to full brother's son. ");

        puts("\n\t5. Then comes the turn of full paternal uncle");

        puts("(C)DHAW-U'L ARHAM:\n\n\tThe last category of inheritors are known as Dhaw-u'l Arham, i.e. relations connected through females, but it is in extremely rare cases that they get any share in the inheritance. The following relatives come under this category. ");

        puts("\n\t1. The son of the daughter and daughter of the daughter. ");

        puts("\n\t2. The son of the daughter of the son, and daughter of the daughter of the son and their children. ");

        puts("\n\t3. Maternal grandfather, maternal grandfather of the father, the grandfather of the mother, maternal grandfather of the mother, the grandmother of the mother, the children of the sisters, the sisters of the father and those of the mother, etc. ");

        puts("\n\nNOTE:\n\n*Four persons cannot get inheritance: ");

        puts("\n\t(a) A fugitive slave who has fled away from his master.");

        puts("\n\t(b) One who has murdered one's predecessor intentionally or unintentionally.");

        puts("\n\t(c) One who professes a religion other than Islam, ");

        puts("\n\t(d) One living in Dar-ul-Harb cannot inherit the property of one living in Dar-ul-Islam and vice versa. ");
        getch();
}

void viewDistributionProperties(){

    system("cls");

        puts("\n\t\t\t ***** DISTRIBUTION OF PROPERTIES *****");

        puts("\n\nCONSIDERATIONS:");

        puts("\n\n# The law of inheritance in Islam is based upon five main considerations: ");

        puts("\n\t1. To break up the concentration of wealth in individuals and spread it out in society. ");

        puts("\n\t2. To respect the property right of ownership of an individual earned through honest means. ");

        puts("\n\t3. To hammer in the consciousness of man the fact that man is not the absolute master of wealth he produces but he is its trustee and is not,therefore, authorized to pass it on to others as he likes. ");

        puts("\n\t4. To consolidate the family system which is the social unit of an Islamic society. ");

        puts("\n\t5. To give incentive to work and encourage economic activity as sanctioned by Islam. ");

        puts("\n\n\nOBLIGATIONS:");

        puts("\n\n# While laying down the rules for the distribution of the estate of the deceased,the first principle to be observed is that the property both movable and immovable can be distributed after meeting the following obligations:");

        puts("\n\t1. Funeral expenses;");

        puts("\n\t2. Clearing off the debts incurred by the deceased; ");

        puts("\n\t3. payment of bequest, if any, to the extent of one-third of the total assets. It may be remembered that the Mahr of the wife, if it had not been paid, is included in the debt. Moreover, it is not lawful to make a bequest in favour of a person who is entitled to a share in the inheritance");

        puts("\n\n\t\t\t ** SHARE OF DIFFERENT HEIRS **");

        puts("\n\n1. SHARE OF HUSBAND:");

        puts("\n* If no entitled descendants exist (ie; Children/Grandchildren) then\n\tHusband = 1/2");

        puts("\n* If entitled descendants exist (ie; children/grandchildren then\n\tHusband = 1/4");


        puts("\n\nNote: Entitled descendants = sons, daughters, son's son, son's daughter. Daughter's children are not entitled.");

        puts("\n\n2. SHARE OF WIFE: ");

        puts("\n* If no entitled descendants exist (ie; Children/Grandchildren) then \n\twife = 1/4");

        puts("\n* if entitled descendants exist (ie; children/grandchildren) then wife = 1/8");

        puts("\n\nNote: Entitled descendants = Sons, Daughters, Son’s son, Son’s Daughter. daughter’s children are not entitled.");

        puts("\n\n3. SHARE OF DAUGHTER'(s): ");

        puts("\n* If only one daughter (and no sons) then\n\tDaughter = 1/2.");

        puts("\n* if two or more daughters only (and no sons) then\n\tDaughters = 2/3(to be shared equally between all of them)");

        puts("\n* if both son’s & daughters exist, then\n\tSon : Daughter = 2:1");

        puts("\n\n4. SHARE OF FATHER");

        puts("\n* If entitled descendants exist  (Sons, Daughters, Son’s sons, Son’s daughters) then\n\tFather = 1/6");

        puts("\n* If no male descendants exist (sons, son’s sons) then\n\tFather = 1/6 plus residue (residue = remainder after all legal shares are distributed)");

        puts("\n* If no entitled descendants exist then\n\tFather = residue");


        puts("\n\n5. SHARE OF MOTHER");

        puts("\n* If entitled descendants or brothers/sisters exist then\n\tmother = 1/6");

        puts("\n* If no entitled descendants exist then\n\t if no brothers/sisters, no father, no spouse exist then\n\t mother = 1/3");



        puts("\n* If brothers/sisters, father, or spouse exist then\n\tmother = 1/3 of residue");

        puts("\n\n6. UTERINE BROTHER/SISTER ( From Same Mother, Different Father)");
        puts("\n* If one uterine brother/sister exist  then\n\t if no entitled descendants and no male ascendants (Father/Father’s Father etc) then\n\t uterine brother = 1/6 or uterine sister = 1/6");
        puts("\n* If two or more uterine brothers/sisters exist then\n\t if no entitled descendants and no male ascendants (Father/Father’s Father etc.) then\n\t all uterine brothers & sisters = 1/3");
        puts("\n* Note: If there are uterine brothers/sisters in addition to full");

        puts("\n* Brothers/sisters (same father/mother), then they share in the residue.");
        puts("\n\n7. SHARE OF SON'S DAUGHTER");
        puts("\n* If one son's daughter exist then\n\t if no daughters exist\n\t then\n\t if no son's son exist then\n\t son's daughter = 1/2");
        puts("\n* If son's son exist then\n\t son's daughter = half share of son's son (ie Son's son share: son's daughter share = 2:1)");
        puts("\n* If two or more son's daughters exist then\n\t if no daughters exist then\n\t  if no son's sons exist then\n\t son's daughters = 2/3 (equally between them)");
        puts("\n* If son's son exists then\n\t son's daughter = half share of son's son (ie son's son share: son's daughter share = 2:1)");
        puts("\n\n8. SHARE OF FULL BROTHER/SISTER(Full Brother/Sisters are brothers/sisters from the same FATHER & MOTHER)");
        puts("\n* Brothers & Sisters inherit ONLY when there are NO Descendants (Son/Sons,Son's son etc.) and NO Ascendants (Father/Grandfather etc.)");
        puts("\nNote.\nThe arabic word \"AL-KHALALA\" is used in the Quran, Chapter 4 - Al-Nisa,Verses 12 & 176, which is translated by almost all the translators of the Quran tomean \"Ascendants & Descendants\" thus giving rise to the interpretation that they include“Parents and Children”. However, many scholars have preferred to classify theword as meaning “Father or Son” thus excluding the female components of bothAscendants and Descendants (mother & daughters).");
        puts("\n* If no full brother and no female entitled descendant exist (daughter, son's daughter etc.)  then\n\t if deceased was male, then\n\t full sister = 1/2 (if only one)");
        puts("\n* If no full sister and no female entitled descendant exist then\n\t if deceased was female,then\n\t full brother = 1 (if only one)");
        puts("\n* If two or more brothers & sisters then\n\t full sisters = 2/3 (shared equally between them), full brother's & sister's (combination) = 2:1");
        puts("\n* If no full brother exist but female entitled descendant exist(daughter, son's daughter etc.) then\n\tfull sister = 1/6 (if only one)");
        puts("\n* If no full sister exist but female entitled descendant exist  then\n\t full brother = 1/6 (if only one)");
        puts("\n* If female entitled descendant exist then\n\t full sisters & brothers = 1/3 (share equally)");
        puts("\n\n9. CONSANGUINE SISTER (Sister from same Father but different Mother)");
        puts("\n* Consanguine sisters inherit only when there are no son's or son's son(s) and no father and no full brother.");
        puts("\n* If only one full sister and no consanguine brother then\n\t consanguine sister (if only one) = 1/2,consanguine sister(s) (if two or more) = 2/3");
        puts("\n* If one full sister and consanguine brother(s) then\n\t(consanguine) brother : sister = 2:1");
        puts("\n\n 10. TRUE GRANDMOTHER");
        puts("\n* True Grandmother is defined as the one whose line of connection with the deceased is not interrupted by a male between two females. They areentitled only if the father or mother do not exist.\n\t Eg: Mother's Mother, Father's MotherFather's Father's Mother, Mother's Mother's Mother");
        puts("\n* TRUE GRANDMOTHER = 1/6");
        puts("\n\n11. TRUE GRANDFATHER");
        puts("\n* True Grandfather is the one whose line of connection with the deceased is not interrupted by a FEMALE between two MALES. They are entitled only if the Father or Mother do not exist.\n\tEg:Father's Father,Father's Father's Father, Mother's Father, Mother's Father's Father.");
        puts("\n* True grandfather = 1/6 if male descendants exist(son, etc)");
        puts("\n* True grandfather = 1/6 + residue if female descendants exist");
        puts("\n* True grandfather = residue if no male/female descendants exist");
        puts("\n\n12. UNCLES & AUNTS (Father's/Mother's Brothers & Sisters)");
        puts("\n* Uncles and Aunts are only entitled in the absence of Grandparents. This means that they will receive shares only if there are no Parents and Grandparents because Grandparents do not inherit when the Parents are living. They will also NOTinherit if the children (or children's children) of the deceased are living.");
        puts("\n* Proportions here are also 2:1 for Male : Female.");
        puts("\n\n13. NEPHEWS & NIECES (Children of Brothers/Sisters)");
        puts("\n* Nephews and Nieces are only entitled in the absence of Brothers and Sisters. This means that they take the shares of the Brothers/Sisters of the deceased in their absence. Hence a Nephew/Niece will receive what his/her parent (Brother/Sister of the deceased) would have received if he/she was alive. They will also NOT inherit if the children (or children's children) of the deceased are living.");
        puts("\n* Proportions here are also 2:1 for Male : Female.");
        getch();
}

struct heirs* clone(struct heirs *l){
    struct heirs *q, *head, *p;
    q=(struct heirs *)malloc(sizeof(struct heirs));
    q->number=l->number;
    q->share=l->share;
    q->type=l->type;
    q->next=NULL;
    head=q;
    p=head;
    l=l->next;
    while(l!=NULL){
        q=(struct heirs *)malloc(sizeof(struct heirs));
        q->number=l->number;
        q->share=l->share;
        q->type=l->type;
        q->next=NULL;
        p->next=q;
        p=p->next;
        l=l->next;
    }
    return head;
}
struct heirs* readdata(){

    int option, number,ask;
    struct heirs *p, *q, *head;
    q=(struct heirs *)malloc(sizeof(struct heirs));
    q->next=NULL;
    head=q;
    p=head;
    do{
            system("cls");
            puts("\n\t\t\t *****ISLAMIC INHERITANCE CALCULATOR *****");
            puts("\n\t\t\t *****List of Heirs *****");
            puts("\n\t\t 1. Husband \t\t\t\t 2. Wives");
            puts("\n\t\t 3. Daughters \t\t\t\t 4. Sons");
            puts("\n\t\t 5. Father \t\t\t\t 6. Mother");
            puts("\n\t\t 7. Paternal GrandFather \t\t 8. Paternal GranMother");
            puts("\n\t\t 9. Maternal GranMother \t\t 10. Paternal GranSons");
            puts("\n\t\t 11. Paternal GrandDaughters  \t\t 12. Brothers ");
            puts("\n\t\t 13. Sisters \t\t\t\t 14. Brothers' Sons ");
            puts("\n\t\t 15. Sons of Brothers' Sons \t\t\t 16. Father's Brothers ");
            puts("\n\t\t 17. Sons of Father's Brothers");
            printf("\n\t\t Please choose the live heir:");
            scanf("%d",&option);
            q->type=option;
            printf("\n\t\t Please enter number of heirs: ");
            scanf("%d",&number);
            q->number=number;
            q->share=0;
            printf("\n\t\t Do you add more?(1 for yes / 2 for no)");
            scanf("%d",&ask);
            if(ask==1){
                q=(struct heirs *)malloc(sizeof(struct heirs));
                q->next=NULL;
                p->next=q;
                p=p->next;
            }

        }while(ask==1);

        //p=head;
        /*while(p!=NULL){
            printf("%d  ",p->type);
            printf("%d  ",p->number);
            printf("%d\n",p->share);
            p=p->next;
        }*/
        return head;
}

int hasNoChildren(struct heirs *l){
    int s=0,d=0,gs=0,gd=0;
    while(l!=NULL){
        if(l->type==3){
            d=1;
        }
        if(l->type==4){
            s=1;
        }
        if(l->type==10){
            gs=1;
        }
        if(l->type==11){
            gd=1;
        }
        l=l->next;
    }
    if(s==0 && d==0 && gs==0 && gd==0)
            return 1;
    else
            return 0;

}

int hasNoChildrenAndMultipleChildrens(struct heirs *l){
    int s=0,d=0,gs=0,gd=0,ns=0;
    while(l!=NULL){
        if(l->type==3){
            d=1;
        }
        if(l->type==4){
            s=1;
        }
        if(l->type==10){
            gs=1;
        }
        if(l->type==11){
            gd=1;
        }
        if(l->type==12){
            ns=ns+l->number;
        }
        if(l->type==13){
            ns=ns+l->number;
        }
        l=l->next;
    }
    if(s==1 || d==1 || gs==1 || gd==1 || ns>1)
            return 0;
    else
            return 1;
}

int hasNoMGrandMother(struct heirs *l){
    int mgm=0;
    while(l!=NULL){
        if(l->type==9){
            mgm=1;
        }
        l=l->next;
    }
    if(mgm==0)
        return 1;
    else
        return 0;
}

int hasNoFatherAndPaternalGrandMother(struct heirs *l){
    int f=0,pgm=0;
    while(l!=NULL){
        if(l->type==5){
            f=1;
        }
        if(l->type==8){
            pgm=1;
        }
        l=l->next;
    }
    if(f==0 && pgm==1)
        return 0;
    else
        return 1;
}


int hasSingleDaughter(struct heirs *l){
    int d=0;
    while(l!=NULL){
        if(l->type==3 && l->number==1){
            d=1;
        }
        l=l->next;
    }
    if(d==1)
        return 1;
    else
        return 0;
}

int hasMultipleGrandDaughters(struct heirs *l){
    int gd=0;
    while(l!=NULL){
        if(l->type==11 && l->number>1){
            gd=1;
        }
        l=l->next;
    }
    if(gd==1)
        return 1;
    else
        return 0;
}

int hasMultipleSisters(struct heirs *l){
    int s=0;
    while(l!=NULL){
        if(l->type==13 && l->number>1){
            s=1;
        }
        l=l->next;
    }
    if(s==1)
        return 1;
    else
        return 0;
}
//////////preconditions/////////////////////
int preconDaughters(struct heirs *l){
    int s=0;
    while(l!=NULL){
        if(l->type==4){
            s=1;
        }
        l=l->next;
    }
    if(s==0)
        return 1;
    else
        return 0;
}

int preconGrandFather(struct heirs *l){
    int f=0;
    while(l!=NULL){
        if(l->type==5){
            f=1;
        }
        l=l->next;
    }
    if(f==0)
        return 1;
    else
        return 0;
}

int preconPGrandMother(struct heirs *l){
    int f=0,m=0;
    while(l!=NULL){
        if(l->type==5){
            f=1;
        }
        if(l->type==6){
            m=1;
        }
        l=l->next;
    }
    if(f==0 && m==0)
        return 1;
    else
        return 0;
}
int preconMGrandMother(struct heirs *l){
    int m=0;
    while(l!=NULL){
        if(l->type==6){
            m=1;
        }
        l=l->next;
    }
    if(m==0)
        return 1;
    else
        return 0;
}
int preconGrandDaughters(struct heirs *l){
    int s=0,gs=0,d=0;
    while(l!=NULL){
        if(l->type==4){
            s=1;
        }
        if(l->type==3){
            d=l->number;
        }
        if(l->type==10){
            gs=1;
        }
        l=l->next;
    }
    if(s==0 && d<=1 && gs==0 )
        return 1;
    else
        return 0;
}

int preconSisters(struct heirs *l){
    int s=0,gs=0,d=0,gd=0,f=0,gf=0,b=0;
    while(l!=NULL){
        if(l->type==4){
            s=1;
        }
        if(l->type==3){
            d=1;
        }
        if(l->type==10){
            gs=1;
        }
        if(l->type==11){
            gd=1;
        }
        if(l->type==5){
            f=1;
        }
        if(l->type==7){
            gf=1;
        }
        if(l->type==12){
            b=1;
        }
        l=l->next;
    }
    if(s==0 && d==0 && gs==0 && gd==0 && f==0 && gf==0 && b==0)
        return 1;
    else
        return 0;
}

////////////////////Prescribed Shares////////////////////////////
struct heirs* computePrescribedShares(struct heirs *l){
    int n;
    struct heirs *t, *temp, *r;
    t=clone(l);
    r=t;
    while(t!=NULL){
            //printf("%d  ",t->type);
            //printf("%d  ",t->number);
            //printf("%d\n",t->share);
            //....Husband......//
            if (t->type==1){
                    temp=l;
                    t->share=(tes/4)+((tes/4)*hasNoChildren(temp));
            }
            //....wives......//
            else if (t->type==2){
                    temp=l;
                    t->share=((tes/8)+((tes/8)*hasNoChildren(temp)))/t->number;
            }
            //....Daughters......//
            else if (t->type==3){
                    temp=l;
                    if(preconDaughters(temp)){
                        if(t->number>1)
                            n=1;
                        else
                            n=0;
                        t->share=((tes/2)+((tes/6)*n))/t->number;
                    }
            }

            //....Father......//

            else if (t->type==5){

                t->share=(tes/6);
            }
            //....Mother......//

            else if (t->type==6){
                    temp=l;
                    n=hasNoChildrenAndMultipleChildrens(temp);
                    t->share=((tes/6)+((tes/6)*n));
            }
            //....Paternal GrandFather......//

            else if (t->type==7){
                    temp=l;
                    if(preconGrandFather(temp)){
                       t->share=(tes/6);
                    }
            }

            //....Paternal GrandMother......//
            else if (t->type==8){
                    temp=l;
                    if(preconPGrandMother(temp)){
                        n=hasNoMGrandMother(temp);
                        t->share=(tes/12)+((tes/12)*n);
                    }
            }

            //....Maternal GrandMother......//
            else if (t->type==9){
                    temp=l;
                    if(preconMGrandMother(temp)){
                       n=hasNoFatherAndPaternalGrandMother(temp);
                        t->share=(tes/12)+((tes/12)*n);
                    }

            }

            //....paternal GrandDaughters......//
            else if (t->type==11){
                    temp=l;
                    if(preconGrandDaughters(temp)){
                            t->share=((tes/6)*hasSingleDaughter(temp) + (1-hasSingleDaughter(temp))*((tes/2) + ((tes/6)*hasMultipleGrandDaughters(temp))))/t->number;
                    }
            }

            //....paternal Sisters......//
            else if (t->type==13){
                    temp=l;
                    if(preconSisters(temp)){
                        t->share=((tes/2) + (tes/6) * hasMultipleSisters(temp))/t->number;
                    }
            }
            t=t->next;
        }

        return r;
}

///////////////////Residual Shares///////////////
///Check of Daughter///
int hasDaughter(struct heirs *l){
    int d=0;
    while(l!=NULL){
        if(l->type==3){
            d=l->number;
        }
        l=l->next;
    }
    if(d==0)
        return 0;
    else
        return d;
}

///Check of GrandDaughters///
int hasGrandDaughter(struct heirs *l){
    int gd=0;
    while(l!=NULL){
        if(l->type==11){
            gd=l->number;
        }
        l=l->next;
    }
    if(gd==0)
        return 0;
    else
        return gd;
}

///Check of GrandSister///
int hasSister(struct heirs *l){
    int s=0;
    while(l!=NULL){
        if(l->type==13){
            s=l->number;
        }
        l=l->next;
    }
    if(s==0)
        return 0;
    else
        return s;
}

/////check heir///////
int checkHeir(int type,struct heirs *l){
        int h=0;
        while(l!=NULL){
            if(l->type==type){
                h=1;
                //printf("\n\tThe total distributed prescribed shares : %d",type);
                break;
            }
            l=l->next;
        }
        return h;
}

struct heirs* computeResidualShares(struct heirs *l,struct heirs *p ){
    int n,heir;
    double sum=0;
    struct heirs *t, *temp;
    t=l;
    while(p!=NULL){
        sum=sum+(p->share*p->number);
        p=p->next;
    }
    printf("\n\tThe total distributed prescribed shares : %-10lf",sum);
    printf("\n\tThe Remaining Shares to be distributed for residual heirs  : %-10lf",(tes-sum))
    ;


    if(sum<tes){
            if(checkHeir(4,l)==1){
                heir=4;
            }
            else if(checkHeir(10,l)==1){
                heir=10;
            }
            else if(checkHeir(5,l)==1){
                heir=5;
            }
            else if(checkHeir(7,l)==1){
                heir=7;
            }
            else if(checkHeir(12,l)==1){
                heir=12;
            }
            else if(checkHeir(3,l)==1){
                heir=3;
            }
            else if(checkHeir(11,l)==1){
                heir=11;
            }
            else if(checkHeir(14,l)==1){
                heir=14;
            }
            else if(checkHeir(15,l)==1){
                heir=15;
            }
            else if(checkHeir(16,l)==1){
                heir=16;
            }
            else if(checkHeir(17,l)==1){
                heir=17;
            }
            else{
                heir=0;
            }
            //printf("\n\tThe total distributed prescribed shares : %d",heir);
            if (heir==4){
                        t=l;
                        while(t!=NULL){
                           if(t->type==heir){
                            break;
                           }
                           t=t->next;
                        }
                        temp=l;
                        n=hasDaughter(temp);
                        if(n!=0){
                                t->share=(2*(tes-sum)/(2*t->number+n));
                                temp=l;
                                while(temp!=NULL){
                                        if(temp->type==3){
                                            temp->share=t->share/2;
                                            break;
                                        }
                                        temp=temp->next;
                                }
                        }
                        else {
                            t->share=(tes-sum)/t->number;
                        }
                    }
                else if (heir==10){
                        t=l;
                        while(t!=NULL){
                           if(t->type==heir){
                            break;
                           }
                           t=t->next;
                        }
                        temp=l;
                        n=hasGrandDaughter(temp);
                        if(n!=0){
                                t->share=(2*(tes-sum)/(2*t->number+n));
                                temp=l;
                                while(temp!=NULL){
                                        if(temp->type==11){
                                            temp->share=t->share/2;
                                            break;
                                        }
                                        temp=temp->next;
                                }
                        }
                        else {
                            t->share=(tes-sum)/t->number;
                        }
                    }
                else if(heir==5) {
                        t=l;
                        while(t!=NULL){
                               if(t->type==heir){
                                    break;
                                }
                                t=t->next;
                        }
                        t->share=tes-sum;
                    }
                else if(heir==7) {
                        t=l;
                        while(t!=NULL){
                           if(t->type==heir){
                                break;
                           }
                           t=t->next;
                        }
                        t->share=tes-sum;
                    }
                else if (heir==12){
                        t=l;
                        while(t!=NULL){
                           if(t->type==heir){
                            break;
                           }
                           t=t->next;
                        }
                        temp=l;
                        n=hasSister(temp);
                        if(n!=0){
                                t->share=(2*(tes-sum)/(2*t->number+n));
                                temp=l;
                                while(temp!=NULL){
                                        if(temp->type==13){
                                            temp->share=t->share/2;
                                            //break;
                                        }
                                        temp=temp->next;
                                }
                        }
                        else {
                            t->share=(tes-sum)/t->number;
                        }
                    }
                else if (heir==3){
                        t=l;
                        while(t!=NULL){
                           if(t->type==heir){
                            break;
                           }
                           t=t->next;
                        }
                        temp=l;
                        n=hasSister(temp);
                        if(n!=0){
                                temp=l;
                                while(temp!=NULL){
                                        if(temp->type==13){
                                            temp->share=(tes-sum)/temp->number;
                                            //break;
                                        }
                                        temp=temp->next;
                                }
                        }
                    }
                else if (heir==11){
                        t=l;
                        while(t!=NULL){
                           if(t->type==heir){
                            break;
                           }
                           t=t->next;
                        }
                        temp=l;
                        n=hasSister(temp);
                        if(n!=0){
                                temp=l;
                                while(temp!=NULL){
                                        if(temp->type==13){
                                            temp->share=(tes-sum)/temp->number;
                                            //break;
                                        }
                                        temp=temp->next;
                                }
                        }

                    }
                else if(heir==14) {
                        t=l;
                        while(t!=NULL){
                           if(t->type==heir){
                            break;
                           }
                           t=t->next;
                        }
                        t->share=(tes-sum)/t->number;
                    }
                else if(heir==15) {
                        t=l;
                        while(t!=NULL){
                           if(t->type==heir){
                            break;
                           }
                           t=t->next;
                        }
                        t->share=(tes-sum)/t->number;
                    }
                else if(heir==16) {
                        t=l;
                        while(t!=NULL){
                           if(t->type==heir){
                            break;
                           }
                           t=t->next;
                        }
                        t->share=(tes-sum)/t->number;
                    }
                    else if(heir==17) {
                        t=l;
                        while(t!=NULL){
                           if(t->type==heir){
                            break;
                           }
                           t=t->next;
                        }
                        t->share=(tes-sum)/t->number;
                    }
                    else{
                    }
    }
    return l;
}

struct heirs* computeGrandTotal(struct heirs *p,struct heirs *r){
       struct heirs *t, *o, *temp;
       double sum=0;
       t=clone(p);
       o=t;
       while(t!=NULL){
            temp=r;
            while(temp!=NULL){
                    if(t->type==temp->type){
                        t->share=t->share+temp->share;
                    }
                    temp=temp->next;
            }
            //sum=sum+(t->share*t->number);
            t=t->next;
       }
       //printf("\n\tThe total distributed prescribed shares : %lf",sum);
       /*factor=sum/tes;
       temp=o;
       while(temp!=NULL){
        temp->share=factor*temp->share;
        temp=temp->next;
       }*/
       return o;
}
struct heirs* adjustShares(struct heirs *l){
       struct heirs *t, *temp;
       double sum=0,m;
       t=l;
       while(t!=NULL){
            sum=sum+(t->share*t->number);
            t=t->next;
       }
       printf("\n\tThe total distributed prescribed shares : %lf",sum);
       m=tes/sum;
       printf("\n\tThe Multiplication Factor : %lf",m);
       t=l;
       while(t!=NULL){
        t->share=m*t->share;
        t=t->next;
       }
       return l;
}

/////////output///////////
char * getString(int c){

    switch(c){
        case 1:
            return "Husband";
            break;
        case 2:
            return "Wives";
            break;
        case 3:
            return "Daughters";
            break;
        case 4:
            return "Sons";
            break;
        case 5:
            return "Father";
            break;
        case 6:
            return "Mother";
            break;
        case 7:
            return "Paternal GrandFather";
            break;
       case 8:
            return "Paternal GrandMother";
            break;
        case 9:
            return "Maternal GrandMother";
            break;
        case 10:
            return "Paternal GrandSons";
            break;
        case 11:
            return "Paternal GrandDaughters";
            break;
        case 12:
            return "Brothers";
            break;
        case 13:
            return "Sisters";
            break;
        case 14:
            return "Brothers's Sons";
            break;
        case 15:
            return "Sons of Brother's Sons";
            break;
        case 16:
            return "Father's Brothers";
            break;
        case 17:
            return "Sons of Father's Brothers";
            break;
    }

}


void displayResults(struct heirs *listOfHeirs){
        struct heirs *l;
        char *n;
        l=listOfHeirs;
        printf("\n\t%-25s\t\t%-10s\t\t%-10s","Heirs","Number","Shares/person");
        printf("\n\t------------------------------------------------------------------------------");

        while(l!=NULL){
               n=getString(l->type);
               printf("\n\t%-25s\t\t%-10d\t\t%-10lf",n,l->number,l->share);
               l=l->next;
    }

}

int main()
{
    int choice;
    struct heirs *listOfHeirs,*prescribedHeirs,*residualHeirs, *totalShares;

    homescreen();

mainhome:
    system("cls");


    puts("\n\t\t Please choose what you want to know:");
    puts("\n\t\t 1.Verses of AL-QURAN on FARAYEZ      ");
    puts("\n\t\t 2.HADITH on FARAYEZ   ");
    puts("\n\t\t 3.List of HEIRS     ");
    puts("\n\t\t 4.Distribution of Properties            ");
    puts("\n\t\t 5.Islamic Inheritance Calculator        ");
    puts("\n\t\t 6.EXIT             ");
    printf("\n\t\t-------------------------------\n\n\t\t  ");


    scanf("%d",&choice);

    if(choice==1)
    {
        viewQuran();
        goto mainhome;
    }

    else if(choice==2)
    {
        viewHadith();
        getch();
        goto mainhome;

    }

    else if(choice==3)
    {
        viewHeirs();
        getch();
        goto mainhome;
    }

    if(choice==4)
    {
        viewDistributionProperties();
        getch();
        goto mainhome;

    }
    if(choice==5)
    {

        listOfHeirs=readdata();
        /*t=listOfHeirs;
         while(t!=NULL){
            printf("\t\t%d  ",t->type);
            printf("\t\t%d  ",t->number);
            printf("\t\t%lf\n",t->share);
            t=t->next;
        }*/

        printf("\n\tPlease enter the amount of deceased's property: ");
        scanf("%lf",&tes);
        //prescribedHeirs=clone(listOfHeirs);
        prescribedHeirs=computePrescribedShares(listOfHeirs);
        /*printf("\n\t*******************************List of Heirs**********************************");
        printf("\n\t------------------------------------------------------------------------------");
        displayResults(listOfHeirs);
        printf("\n\t------------------------------------------------------------------------------\n");
        */

        printf("\n\t*****************************Prescribed Shares********************************");
        printf("\n\t------------------------------------------------------------------------------");
        displayResults(prescribedHeirs);
        printf("\n\t------------------------------------------------------------------------------\n");

        residualHeirs=computeResidualShares(listOfHeirs,prescribedHeirs);
        printf("\n\n\t********************************Residual Shares********************************");
        printf("\n\t------------------------------------------------------------------------------");
        displayResults(residualHeirs);
        printf("\n\t------------------------------------------------------------------------------");
        totalShares=computeGrandTotal(prescribedHeirs,residualHeirs);
        printf("\n\n\t********************************Total Shares***********************************");
        printf("\n\t------------------------------------------------------------------------------");
        displayResults(totalShares);
        printf("\n\t------------------------------------------------------------------------------");
        totalShares=adjustShares(totalShares);
        printf("\n\n\t******************************Total Earned Shares******************************");
        printf("\n\t------------------------------------------------------------------------------");
        displayResults(totalShares);
        printf("\n\t------------------------------------------------------------------------------");

    }

    if(choice==6)
        exit(1);
}

