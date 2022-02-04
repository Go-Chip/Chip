#include <cs50.h>
#include <stdio.h>
#include <strings.h>
#include <string.h>
int main(void)
{
    string name = get_string("Please tell me your name: ");
    while ('1' == '1')
    {
    string summon = "Hey Chip!";
    string s1 = get_string("Say something ");
    string s2 = "Hi";
    string s3 = "Hi!";
    string s4 = "Hi.";
    string s5 = "Hello";
    string s6 = "Hello!";
    string s7 = "Hello.";
    string s8 = "Hi there";
    string s9 = "Hi there!";
    string s10 = "Hi there.";
    string s11 = "Hello there";
    string s12 = "Hello there!";
    string s13 = "Hello there.";
    string s14 = "Hey";
    string s15 = "Hey!";
    string s16 = "Hey.";
    string s17 = "Hey there";
    string s18 = "Hey there!";
    string s19 = "Hey there.";
    string s20 = "Apps";
    string s21 = "Applications";
    string s22 = "Show me your apps";
    string s23 = "Show me your applications";
    string s24 = "Show me your apps.";
    string s25 = "Show me you applications.";
    string s26 = "Chip";
    string s27 = "Heck";
    string s28 = "Can you please work";
    string pref = "Do you like";
    string color = "your favorite color";
    if (strcasecmp(s1, summon) == 0)
    {
        printf("Hi %s", name);
        printf("! How can I help you?\n");
    }

    if (strcasecmp(s1, s2) == 0 || strcasecmp(s1, s3) == 0 || strcasecmp(s1, s4) == 0 || strcasecmp(s1, s5) == 0 || strcasecmp(s1, s6) == 0 || strcasecmp(s1, s7) == 0 || strcasecmp(s1, s8) == 0 || strcasecmp(s1, s9) == 0 || strcasecmp(s1, s10) == 0 || strcasecmp(s1, s11) == 0 || strcasecmp(s1, s12) == 0 || strcasecmp(s1, s13) == 0)
    {
        printf("Hi %s\n", name);
    }
    if (strcasecmp(s1, s20) == 0 || strcasecmp(s1, s21) == 0 || strcasecmp(s1, s22) == 0 || strcasecmp(s1, s23) == 0 || strcasecmp(s1, s24) == 0 || strcasecmp(s1, s25) == 0)
    {
        printf("Ok\n");
        printf("-Manual\n");
        printf("-Commands\n");
        printf("-ASCII Translator\n");
    }
    if (strcasecmp(s1, s27) == 0)
    {
        printf("Heck what?\n");
    }
    if (strcasecmp(s1, s26) == 0)
    {
        printf("That's my name!\n");
    }
    string match = strstr(s1, pref);
    if (match)
    {
        printf("Yes I do!\n");
    }
    string match1 = strstr(s1, color);
    if (match)
    {
        printf("My favorite colors are blue, black and white. They are like the perfect combination!\n");
    }
    }
}