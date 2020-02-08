#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <vector>
#include <string>
#include <ctime>

using namespace std;

int main(){
srand(time(NULL));
vector<string>possibleAnswers(20);
possibleAnswers.at(0) = "It is certain.\n";
possibleAnswers.at(1) = "It is decidedly so.\n";
possibleAnswers.at(2) = "Without a doubt.\n";
possibleAnswers.at(3) = "Yes - definitely.\n";
possibleAnswers.at(4) = "You may rely fon it.\n";
possibleAnswers.at(5) = "As I see it, yes.\n";
possibleAnswers.at(6) = "Most likely.\n";
possibleAnswers.at(7) = "Outlook good.\n";
possibleAnswers.at(8) = "Yes.\n";
possibleAnswers.at(9) = "Signs point to yes.\n";
possibleAnswers.at(10) = "Reply hazy, try again.\n";
possibleAnswers.at(11) = "Ask again later.\n";
possibleAnswers.at(12) = "Better not tell you now.\n";
possibleAnswers.at(13) = "Cannot predict now.\n";
possibleAnswers.at(14) = "Concentrate and ask again.\n";
possibleAnswers.at(15) = "Don't count on it.\n";
possibleAnswers.at(16) = "My reply is no.\n";
possibleAnswers.at(17) = "My sources say no.\n";
possibleAnswers.at(18) = "Outlook not so good.\n";
possibleAnswers.at(19) = "Very doubtful.\n";
string userQuestion;
string userAnswer;
bool continueProgram = true;
bool validQuestion = false;
bool validAnswer = false;
while(continueProgram == true){
userQuestion = "";
cout << "Type your question for the 8 Ball. (must end of '?')" << endl;
cout << "> ";
getline(cin, userQuestion);
cout << endl;
while(validQuestion == false){
  if(userQuestion.at(userQuestion.size() - 1) == '?' && userQuestion.size() > 1){
    validQuestion = true;
  }
  else{
    cout << "Invalid question, questions must end with a '?' and be more than 1 character." << endl;
    cout << "> ";
    getline(cin, userQuestion);
  }
}
if(validQuestion){
  cout << "Your question was: " << userQuestion << endl;
  cout << setfill('=') << setw(19 + userQuestion.size()) << "" << endl;
  cout << "8 Ball says: "<<possibleAnswers.at(rand() % 20) << endl;
  cout << endl;
}
validAnswer = false;
cout << "Would you like to ask another question? (Type 'yes' or 'no')" << endl;
while(!validAnswer){
  cout << "> ";
  getline(cin, userAnswer);
if(userAnswer == "yes"){
  validAnswer = true;
  continueProgram = true;
  cout << "\n";
}
else if(userAnswer == "no"){
  validAnswer = true;
  continueProgram = false;
  cout << "Goodbye!" << endl;
  return 0;
}
else{
  validAnswer = false;
  cout << "Invalid answer, please try again." << endl;
}
}
}
  return 0;
}
