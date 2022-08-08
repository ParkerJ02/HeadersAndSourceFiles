/*
Parker Haynie
Source file for Interactive Story
*/

#include <iostream>
#include <string>
using namespace std;

// This initializes the int variable "answer01".
int answer01;
// This initializes the int variable "answer02".
int answer02;
// This initializes the int variable "answer03".
int answer03;
// This initializes the int variable "answer04".
int answer04;
// This initializes the int variable "answer05".
int answer05;
// This initializes the int variable "answer06".
int answer06;
// This initializes the int variable "answer07".
int answer07;
// This initializes the int variable "answer08".
int answer08;
// This initializes the string function "question01()".
string question01();
// This initializes the string function "question02()".
string question02();
// This initializes the string function "question03()".
string question03();
// This initializes the string function "question04()".
string question04();
// This initializes the string function "question05()".
string question05();
// This initializes the string function "question06()".
string question06();
// This initializes the string function "question07()".
string question07();
// This initializes the string function "question08()".
string question08();

// This is the function that displays the title of the game.
string displayTitle()
{
    // This sends the title of the game to the command terminal.
    cout << "                         <-] Prisoners Escape [->" << endl;
    return " ";
}

// This is the function that displays the divider for the text.
string divider()
{
    // This sends the divider of the game to the command terminal.
    cout << "**************************************************************************" << endl;
    return " ";
}

// This is the function that displays the description of the game.
string displayDescription()
{
    // This sends the description of the game to the command terminal.
    cout << "This is a text adventure game in which you, the player, must make the" << endl;
    cout << "correct decisions in order to escape the building that you are trapped in." << endl;
    return " ";
}

// This is the function that displays the instructions of the game.
string displayInstructions()
{
    // This sends the instructions of the game to the command terminal.
    cout << "If you'd like to escape you must answer a series of questions correctly." << endl;
    cout << "After you answer all of the questions correctly you will be set free but if" << endl;
    cout << "you get just one question wrong then you will be forever trapped within the" << endl;
    cout << "building. From there you can restart the program for another chance." << endl;
    return " ";
}

// This is the function that displays the beginning of the story of the game.
string storySetup()
{
    // This sends the beginning of the story of the game to the command terminal.
    cout << "                            <-] Room One [->" << endl;
    cout << endl;
    cout << "You wake up in a comfortable bed with plain white bed sheets. You look" << endl;
    cout << "around and notice that you are in a very unfamiliar room. The last thing" << endl;
    cout << "that you remember is going out with some of your friends to drink. You" << endl;
    cout << "try to remember more but anything past some conversations with your friends" << endl;
    cout << "is just too fuzzy in your mind. You honestly have no idea as to where you" << endl;
    cout << "are or how you got there." << endl;
    cout << endl;
    cout << "After getting up and out of the bed you realize just how barren the room was." << endl;
    cout << "All there was was you, the bed, and a door on the opposite side of where you" << endl;
    cout << "woke up. You start to take a couple of steps towards the door but as soon as" << endl;
    cout << "you reach the center of the room you hear a alarm come on. The alarm beeps" << endl;
    cout << "three times and then you hear a voice." << endl;
    cout << endl;
    cout << "The voice said, 'Hello, my name is Nina and I will be your escape guide." << endl;
    cout << "I will be asking you a series of questions to test your intellect. If you answer" << endl;
    cout << "all of the questions correctly you will be let go but if you get one of the" << endl;
    cout << "questions wrong then the questions will stop and you will be trapped here forever.'" << endl;
    cout << "As she is telling you all of thisyou walk over to the door and try your best to" << endl;
    cout << "pry it open but it just won't budge." << endl;
    cout << endl;
    cout << "The voice then continues, 'It's just as I said, you will not be set free until" << endl;
    cout << "you answer all of the questions correctly. Are you ready?' she says. You say yes" << endl;
    cout << "and you just think of how you managed to get yourself into such a situation. And" << endl;
    cout << "after that, the questions started." << endl;
    return " ";
}

// This is the function that displays the questionnaire of the game.
string questionnaire()
{
    // This sends the first question of the questionnaire to the command terminal.
    cout << question01();

    // This if/else statement is used to handle the logic of the first question.
    if (answer01 == 3)
    {
        cout << endl;
        cout << "You answer out loud 'Italy'. In response you hear a ding and Ninas voice comes" << endl;
        cout << "back. She says,'Well done. You got your first question right. Now for your" << endl;
        cout << "second question." << endl;
        cout << endl;
        cout << divider() << endl;
        // This sends the second question of the questionnaire to the command terminal.
        cout << question02() << endl;
    }
    else
    {
        cout << endl;
        cout << "After giving your answer Nina says aloud,'Your answer was incorrect and you" << endl;
        cout << "will not be getting out of this building. Thank you for playing." << endl;
        cout << endl;
        cout << endl;
        cout << "***Please restart the program if you would like to play again***" << endl;
        cout << endl;
        exit(EXIT_SUCCESS);
    }

    // This if/else statement is used to handle the logic of the second question.
    if (answer02 == 1)
    {
        cout << "You answer out loud 'Rhubarb'. In response you hear a ding and Ninas voice comes" << endl;
        cout << "back. She says,'Well done. You got your second question right. Now for your" << endl;
        cout << "third question." << endl;
        cout << endl;
        cout << divider() << endl;
        // This sends the third question of the questionnaire to the command terminal.
        cout << question03() << endl;
    }
    else
    {
        cout << "After giving your answer Nina says aloud,'Your answer was incorrect and you" << endl;
        cout << "will not be getting out of this building. Thank you for playing." << endl;
        cout << endl;
        cout << endl;
        cout << "***Please restart the program if you would like to play again***" << endl;
        cout << endl;
        exit(EXIT_SUCCESS);
    }

    // This if/else statement is used to handle the logic of the third question.
    if (answer03 == 2)
    {
        cout << "You answer out loud 'Russian'. In response you hear a ding and Ninas voice comes" << endl;
        cout << "back. She says,'Well done. You got your third question right. Now for your" << endl;
        cout << "fourth question." << endl;
        cout << endl;
        cout << divider() << endl;
        // This sends the fourth question of the questionnaire to the command terminal.
        cout << question04() << endl;
    }
    else
    {
        cout << "After giving your answer Nina says aloud,'Your answer was incorrect and you" << endl;
        cout << "will not be getting out of this building. Thank you for playing." << endl;
        cout << endl;
        cout << endl;
        cout << "***Please restart the program if you would like to play again***" << endl;
        cout << endl;
        exit(EXIT_SUCCESS);
    }

    // This if/else statement is used to handle the logic of the fourth question.
    if (answer04 == 1)
    {
        cout << "You answer out loud 'Entomophobia'. In response you hear a ding and Ninas voice comes" << endl;
        cout << "back. She says,'Well done. You got your fourth question right. Now for your" << endl;
        cout << "fifth question." << endl;
        cout << endl;
        cout << divider() << endl;
        // This sends the fifth question of the questionnaire to the command terminal.
        cout << question05() << endl;
    }
    else
    {
        cout << "After giving your answer Nina says aloud,'Your answer was incorrect and you" << endl;
        cout << "will not be getting out of this building. Thank you for playing." << endl;
        cout << endl;
        cout << endl;
        cout << "***Please restart the program if you would like to play again***" << endl;
        cout << endl;
        exit(EXIT_SUCCESS);
    }

    // This if/else statement is used to handle the logic of the fifth question.
    if (answer05 == 3)
    {
        cout << "You answer out loud 'Colossus of Rhodes'. In response you hear a ding and Ninas voice comes" << endl;
        cout << "back. She says,'Well done. You got your fifth question right. Now for your" << endl;
        cout << "sixth question." << endl;
        cout << endl;
        cout << divider() << endl;
        // This sends the sixth question of the questionnaire to the command terminal.
        cout << question06() << endl;
    }
    else
    {
        cout << "After giving your answer Nina says aloud,'Your answer was incorrect and you" << endl;
        cout << "will not be getting out of this building. Thank you for playing." << endl;
        cout << endl;
        cout << endl;
        cout << "***Please restart the program if you would like to play again***" << endl;
        cout << endl;
        exit(EXIT_SUCCESS);
    }

    // This if/else statement is used to handle the logic of the sixth question.
    if (answer06 == 2)
    {
        cout << "You answer out loud '150-200 million years'. In response you hear a ding and Ninas voice comes" << endl;
        cout << "back. She says,'Well done. You got your sixth question right. Now for your" << endl;
        cout << "seventh question." << endl;
        cout << endl;
        cout << divider() << endl;
        // This sends the seventh question of the questionnaire to the command terminal.
        cout << question07() << endl;
    }
    else
    {
        cout << "After giving your answer Nina says aloud,'Your answer was incorrect and you" << endl;
        cout << "will not be getting out of this building. Thank you for playing." << endl;
        cout << endl;
        cout << endl;
        cout << "***Please restart the program if you would like to play again***" << endl;
        cout << endl;
        exit(EXIT_SUCCESS);
    }

    // This if/else statement is used to handle the logic of the seventh question.
    if (answer07 == 1)
    {
        cout << "You answer out loud 'Jaw'. In response you hear a ding and Ninas voice comes" << endl;
        cout << "back. She says,'Well done. You got your seventh question right. Now for your" << endl;
        cout << "eighth question." << endl;
        cout << endl;
        cout << divider() << endl;
        // This sends the eighth question of the questionnaire to the command terminal.
        cout << question08() << endl;
    }
    else
    {
        cout << "After giving your answer Nina says aloud,'Your answer was incorrect and you" << endl;
        cout << "will not be getting out of this building. Thank you for playing." << endl;
        cout << endl;
        cout << endl;
        cout << "***Please restart the program if you would like to play again***" << endl;
        cout << endl;
        exit(EXIT_SUCCESS);
    }

    // This if/else statement is used to handle the logic of the eighth question.
    if (answer08 == 1)
    {
        cout << "You answer out loud 'China'. In response you hear a ding and Ninas voice comes" << endl;
        cout << "back. She says,'Well done. You got your eighth question right." << endl;
        cout << endl;
        cout << divider() << endl;
    }
    else
    {
        cout << "After giving your answer Nina says aloud,'Your answer was incorrect and you" << endl;
        cout << "will not be getting out of this building. Thank you for playing." << endl;
        cout << endl;
        cout << endl;
        cout << "***Please restart the program if you would like to play again***" << endl;
        cout << endl;
        exit(EXIT_SUCCESS);
    }

    return " ";
}

// This is the function that displays the first question of the questionnaire.
string question01()
{
    cout << "1st Question" << endl;
    cout << endl;
    cout << "Which flies a green, white, and orange (in that order) tricolour flag? " << endl;
    cout << endl;
    cout << "[1] Ireland" << endl;
    cout << "[2] Ivory Coast" << endl;
    cout << "[3] Italy" << endl;
    cout << endl;
    cout << "(Please enter the number that corresponds with your answer bellow)" << endl;
    // This allows the user to enter a value for the variable "answer01".
    cin >> answer01;

    return " ";
}

// This is the function that displays the second question of the questionnaire.
string question02()
{
    cout << "2nd Question" << endl;
    cout << endl;
    cout << "Which of the following is NOT a fruit?" << endl;
    cout << endl;
    cout << "[1] Rhubarb" << endl;
    cout << "[2] Tomatoes" << endl;
    cout << "[3] Avocados" << endl;
    cout << endl;
    cout << "(Please enter the number that corresponds with your answer bellow)" << endl;
    // This allows the user to enter a value for the variable "answer02".
    cin >> answer02;

    return " ";
}

// This is the function that displays the third question of the questionnaire.
string question03()
{
    cout << "3rd Question" << endl;
    cout << endl;
    cout << "Which of the following languages has the longest alphabet?" << endl;
    cout << endl;
    cout << "[1] Greek" << endl;
    cout << "[2] Russian" << endl;
    cout << "[3] Arabic" << endl;
    cout << endl;
    cout << "(Please enter the number that corresponds with your answer bellow)" << endl;
    // This allows the user to enter a value for the variable "answer03".
    cin >> answer03;

    return " ";
}

// This is the function that displays the fourth question of the questionnaire.
string question04()
{
    cout << "4th Question" << endl;
    cout << endl;
    cout << "The fear of insects is known as what?" << endl;
    cout << endl;
    cout << "[1] Entomophobia" << endl;
    cout << "[2] Arachnophobia" << endl;
    cout << "[3] Ailurophobia" << endl;
    cout << endl;
    cout << "(Please enter the number that corresponds with your answer bellow)" << endl;
    // This allows the user to enter a value for the variable "answer04.
    cin >> answer04;

    return " ";
}

// This is the function that displays the fifth question of the questionnaire.
string question05()
{
    cout << "5th Question" << endl;
    cout << endl;
    cout << "Which of the following was considered one of the Seven Ancient Wonders?" << endl;
    cout << endl;
    cout << "[1] Colosseum" << endl;
    cout << "[2] Great Wall of China" << endl;
    cout << "[3] Colossus of Rhodes" << endl;
    cout << endl;
    cout << "(Please enter the number that corresponds with your answer bellow)" << endl;
    // This allows the user to enter a value for the variable "answer05".
    cin >> answer05;

    return " ";
}

// This is the function that displays the sixth question of the questionnaire.
string question06()
{
    cout << "6th Question" << endl;
    cout << endl;
    cout << "How long did dinosaurs live on the earth?" << endl;
    cout << endl;
    cout << "[1] 100-150 million years" << endl;
    cout << "[2] 150-200 million years" << endl;
    cout << "[3] 200+ million years" << endl;
    cout << endl;
    cout << "(Please enter the number that corresponds with your answer bellow)" << endl;
    // This allows the user to enter a value for the variable "answer06".
    cin >> answer06;

    return " ";
}

// This is the function that displays the seventh question of the questionnaire.
string question07()
{
    cout << "7th Question" << endl;
    cout << endl;
    cout << "What is the strongest muscle in the human body?" << endl;
    cout << endl;
    cout << "[1] Jaw" << endl;
    cout << "[2] Heart" << endl;
    cout << "[3] Glutes" << endl;
    cout << endl;
    cout << "(Please enter the number that corresponds with your answer bellow)" << endl;
    // This allows the user to enter a value for the variable "answer07".
    cin >> answer07;

    return " ";
}

// This is the function that displays the eighth question of the questionnaire.
string question08()
{
    cout << "8th Question" << endl;
    cout << endl;
    cout << "Where was the first example of paper money used?" << endl;
    cout << endl;
    cout << "[1] China" << endl;
    cout << "[2] Turkey" << endl;
    cout << "[3] Greece" << endl;
    cout << endl;
    cout << "(Please enter the number that corresponds with your answer bellow)" << endl;
    // This allows the user to enter a value for the variable "answer08".
    cin >> answer08;

    return " ";
}

// This is the function that displays the exit message of the game.
string exitMessage()
{
    cout << "With that final question there was a long beep and then nothing. Complete silence. " << endl;
    cout << "After that you tryed to open the door again and surprisingly it opened and you walked" << endl;
    cout << "out into sunlight. You tried to come back later with cops but there was no evidence" << endl;
    cout << "left behind. It seemed that whoever Nina was, they weren't going to be find anytime soon." << endl;
    cout << endl;
    cout << endl;
    cout << "***Thank you for playing my game!***" << endl;
    return " ";
}