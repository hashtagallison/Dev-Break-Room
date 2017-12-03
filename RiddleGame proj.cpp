#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int randNum(int, int);
void answerCheck(string, string);
int plyrChance = 5, plyrScore = 0, plyrDifficulty, quesNum, correctAnswers = 3;

int main()
{
	plyrDifficulty = correctAnswers / 3;
	string corrAnswer, userAnswer;
	string errorMess = "Sorry there has been a problem with the program. Please close and try again.";
	cout << setfill('-') << setw(10) << " Welcome to Lightning Riddles " << setfill('-') << setw(10) << "\n\n";
	cout << setfill(' ') << setw(10) << "Hope you can think fast!" << setfill(' ') << setw(10) << "\n";

	cout << "In this game you will be challenged by many riddles increasing in difficulty.\n";
	cout << "Each answer is only one word beginning with a capital letter.\n";
	cout << "You can only be wrong 5 times so take your time and think things over!\n\n\n";


	while (plyrChance > 0 || correctAnswers <= 15)
	{

		quesNum = randNum(plyrDifficulty, 10);
		switch (quesNum)
		{
		case 1:
			cout << "David's dad has three sons: Snap, Crackle and who?";
			corrAnswer = "David";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);
			break;

		case 2:
			cout << "Three lives have I. Gentle enough to soothe the skin, Light enough to caress the sky, Hard enough to crack rocks. What am I?\n";
			corrAnswer = "Water";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);
			break;

		case 3:
			cout << "A very pretty thing am I, fluttering in the pale-blue sky. Delicate, fragile on the wing, indeed I am a pretty thing. What am I?\n";
			corrAnswer = "Butterfly";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);
			break;

		case 4:
			cout << "First you see me in the grass dressed in yellow gay.Next I am in dainty white, then I fly away. What am I?\n";
			corrAnswer = "Dandelion";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);
			break;

		case 5:
			cout << "I'm as plain to see as black & white. I prefer to roam about at night. Just don't attack or startle me. Or odiferous emissions may result you see. I'm an omnivore yes it's true. But what's my name tell me do.";
			corrAnswer = "Skunk";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);
			break;

		case 6:
			cout << "It has a long neck, A name of a bird, Feeds on cargo of ships, It's not alive, What is it?";
			corrAnswer = "Crane";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);
			break;

		case 7:
			cout << "Never resting, never still. Moving silently from hill to hill. It does not walk, run or trot, All is cool where it is not. What is it?";
			corrAnswer = "Sunshine";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);
			break;

		case 8:
			cout << "What goes up when the rain comes down?";
			corrAnswer = "Umbrella";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);
			break;

		case 9:
			cout << "I have four of these, With matching extremities. They can do many things, And hardly ever bring me pain. Unless I stick them with a pin, Or burn them sometimes when...\n at is it that I can wiggle at will? And use in other means still?";
			corrAnswer = "Fingers";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);
			break;

		case 10:
			cout << "What can't be burned in fire, nor drowned in water?";
			corrAnswer = "Ice";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);
			break;

		case 11:
			cout << "At night they come without being fetched. By day they are lost without being stolen. What are they?";
			corrAnswer = "Stars";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);
			break;

		case 12:
			cout << "What can climb mountains, cross streams, handle hundreds of feet each day, yet never moves? What are they?";
			corrAnswer = "Trails";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);
			break;

		case 13:
			cout << "What is it the more you take, the more you leave behind?";
			corrAnswer = "Footsteps";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);
			break;

		case 14:
			cout << "At the sound of me, men may dream Or stamp their feet At the sound of me, women may laugh Or sometimes weep. What am I?";
			corrAnswer = "Music";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);
			break;

		case 15:
			cout << "What has an eye but cannot see?";
			corrAnswer = "Needle";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);
			break;

		case 16:
			cout << "There was a green house. Inside the green house there was a white house. Inside the white house there was a red house. Inside the red house there were lots of babies. What is it?";
			corrAnswer = "Watermelon";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);
			break;

		case 17:
			cout << "What is it that's always coming but never arrives?";
			corrAnswer = "Tomorrow";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);

			break;

		case 18:
			cout << "The eight of us go forth not back to protect our king from a foes attack. What are we?";
			corrAnswer = "Pawns";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);

			break;

		case 19:
			cout << "Which word in the dictionary is spelled incorrectly?";
			corrAnswer = "Incorrectly";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);

			break;

		case 20:
			cout << "Feed me and I live, yet give me a drink and I die.";
			corrAnswer = "Fire";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);

			break;

		case 21:
			cout << "What occurs once in every minute, twice in every moment, yet never in a thousand years?";
			corrAnswer = "M";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);
			break;

		case 22:
			cout << " There are two sisters: one gives birth to the other and she, in turn, gives birth to the first. Who are the two sisters?\n ____ and ____?\n";
			corrAnswer = "Day Night";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);
			break;

		case 23:
			cout << "Skinny I am fast, fat I am slow but I will still delight you head to toe. What am I?";
			corrAnswer = "Candle";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);
			break;

		case 24:
			cout << "Without fingers, I point, without arms, I strike, without feet, I run. What am I?";
			corrAnswer = "Clock";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);

			break;

		case 25:
			cout << "I am an instrument you can hear, but you cannot touch or see me. I am a ______";
			corrAnswer = "Voice";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);
			break;

		case 26:
			cout << "When I am born I stay in the sun. A little time and I make crazy. When I'm old, I'm worth a fortune. What am I?";
			corrAnswer = "Wine";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);
			break;

		case 27:
			cout << "I can be used to build castles, but I crumble in your hands. I can help a man see and am found in all the lands.\n What am I?";
			corrAnswer = "Sand";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);
			break;

		case 28:
			cout << "I'm in everybody but everybody still wants me. I won't feed you, but I'll feed the tree.";
			corrAnswer = "Water";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);
			break;

		case 29:
			cout << "I am a small room, but no life lives inside. No matter what weather looms, very cold my residents are inside. What am I?";
			corrAnswer = "Refrigerator";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);
			break;

		case 30:
			cout << " A mirror for the famous, but informative to all. I'll show you the world but it may be a bit small. I am a _____";
			corrAnswer = "Television";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);

			break;

		case 31:
			cout << " I am the beginning of the end, the end of every space. I am the beginning of eternity, the end of time and space\n Who am I?";
			corrAnswer = "E";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);
			break;

		case 32:
			cout << "Different lights make me strange, for each one my size will change.";
			corrAnswer = "Pupil";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);
			break;

		case 33:
			cout << "I have no wallet but I pay my way. I travel the world but in a corner I stay";
			corrAnswer = "Stamp";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);
			break;

		case 34:
			cout << "When you do not know what I am, then I am something. But when you know what I am, I am nothing. What am I?";
			corrAnswer = "Riddle";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);
			break;

		case 35:
			cout << "The dirtier I am, the whiter I get. Leave a mark on me when you stand, I'll leave a mark on you when you sit.";
			corrAnswer = "Chalkboard";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);
			break;

		case 36:
			cout << "Under pressure is the only way I work, and by myself is the only way I'm hurt";
			corrAnswer = "Diamond";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);
			break;

		case 37:
			cout << "What has three feet but cannot walk?";
			corrAnswer = "Yardstick";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);
			break;

		case 38:
			cout << "What asks but never answers? A ____?";
			corrAnswer = "Owl";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);
			break;

		case 39:
			cout << "We hurt without moving. We poison without touching. We bear the truth and the lies.\n We are not to be judged by our size. What are we?";
			corrAnswer = "Words";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);
			break;

		case 40:
			cout << " A natural state, I'm sought by all. Go without me and you shall fall.\n You do me when you spend, and use me when you eat to no end.\n What am I?";
			corrAnswer = "Balance";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);
			break;

		case 41:
			cout << "Alone I am 24th, with a friend I am 20. Another friend and I am unclean. What am I?";
			corrAnswer = "X";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);
			break;

		case 42:
			cout << "I can run but never walk. Wherever I go, thoughts are close behind me. I am a _______?";
			corrAnswer = "Nose";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);
			break;

		case 43:
			cout << "Sometimes I'm high and sometimes low, and I creep between your toes.\n My orders come from the sky, I make men fall and rise.";
			corrAnswer = "Tide";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);
			break;

		case 44:
			cout << " I have a name that's not mine and no one cares about me in their prime. People cry at my sight\n and lie by me all day and night. I am a ______";
			corrAnswer = "Tombstone";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);
			break;

		case 45:
			cout << "My name states I'm a singular male, I can have a number, a head, but no tail\n I've also great strength and I can be tough, But I'll smooth things out when they are rough.\n Although I got back to an age now gone, I'm around today for everyone.";
			corrAnswer = "Iron";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);
			break;

		case 46:
			cout << " I have memories, but none of my own. Whatever is on the inside is what is shown.\n If I'm ever different it's because you changed me I feel like a decoration here for you to change me.\n A ______ _______";
			corrAnswer = "Picture Frame";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);
			break;

		case 47:
			cout << "I fly,yet I have no wings. I cry, yet I have no eyes. Darkness follows me; lower light I never see. What am I?";
			corrAnswer = "Cloud";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);
			break;

		case 48:
			cout << "If it's information you seek, come and see me. If it's pairs of letters you need, I have a consecutive three\n I am a _________?";
			corrAnswer = "Bookkeeper";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);
			break;

		case 49:
			cout << "I talk, but I do not speak my mind.\n I hear words, but I do not listen to thoughts.\n When I wake, all see me\n When I sleep all hear me\n Many heads are on my shoulders\n Many hands are at my feet\n";
			cout << "The strongest steel cannot break my visage\n but the softest whimper can destroy me\n The quiestest whimper can be heard.\n\n What am I?";
			corrAnswer = "Actor";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);
			break;

		case 50:
			cout << "I'm as simple as a circle, worthless as a leader. When I follow a group, their strength increases tenfold.\n By myself I am practically nothing.     What am I?";
			corrAnswer = "Zero";
			getline(cin, userAnswer);
			answerCheck(corrAnswer, userAnswer);
			break;

		default:
			cout << errorMess;
		}
	}
	cout << " Sorry you're out of chances!\n";
	cout << "Hope you try again!";





	return 0;
}






	void answerCheck(string n, string m)// Checks for incorrect or correct answer. Displays score.
	{
		if (n == m)
		{
			cout << setfill('*') << setw(10) << "That's correct!" << setfill('*') << setw(10) << "\n";
			cout << setfill('*') << setw(10) << "You still have " << plyrChance << " chances left!" << setfill('*') << setw(10);
			plyrScore = plyrScore + (100 * plyrDifficulty);
			cout << "Your current score: " << plyrScore << "!";
			correctAnswers++;
		}
		else
		{
			--plyrChance;
			if(plyrChance <= 0)
			{
				cout << "Looks like your out of chances!\n You finished with a final score of: " << plyrScore << "!";
			}
			cout << "Sorry that's incorrect. Time for a new question!";
			

		}
	}



	int randNum(int a, int b) // generates random number to be used to determine question
	{
		int randNum;
		randNum = rand() % (b * a) + (b * a - b);
			return randNum;
	}
