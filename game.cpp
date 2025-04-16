#include <iostream> // include I/O stream library for input and output

// main function

int main()
{ 
    // print intro
    std:: cout << "welcome to The Ancient Warriors! \n" << std::endl;
    std:: cout << "This Game is about an ancient warrior lost in hot and dry deserts of Rajasthan" << std::endl;
    std:: cout << "Enjoy The Game!" << std::endl;

    // Declaring a string variable to hold player's name 
    std::string PlayerName;

    //Promt user to enter Player's Name
    std:: cout << "Please Enter Your Name!! \n";
    std:: cin >> PlayerName;

    // Personalized Welcome Message
    std:: cout << "Welcome " << PlayerName << " To The Thar Desert! \n" << std::endl;

    // Declare an int Variable to Capture user's choice
    int choice;
    int nestedchoice;

    //loop 
    bool exploring = true;
    while(exploring) {

    // Offer User Choice Of Three Places
    std:: cout << "Where Will  " << PlayerName << " Go? \n"  << std::endl;
    std:: cout << "1. Nearby Village" << std::endl;
    std:: cout << "2. Find Water" << std::endl;
    std:: cout << "3. Ancient Temple " << std::endl;
    std:: cout << "4. Exit The Game" << std::endl;
    std:: cout << "Please Enter Your Choice= \n";
    std:: cin >> choice; // stores users output

    // check choice and display corresponding message
    switch (choice)
    {
    case 1:
      std:: cout << "You Are Visiting Nearby Village Kuldhara \n" << std::endl;
        break;
    case 2:
      std:: cout << "You Are Searching For Water \n" << std::endl;
        break;
    case 3:
      std:: cout << "You Are Visiting An Ancient Temple \n" << std::endl;
      std:: cout << "The Temple is isolated and the enviroment there is total silent. \n" << std::endl;
      std:: cout << PlayerName << " Notices some Mysterious Writtings on the walls. \n He Can either: \n" << std::endl;
      std:: cout << "1. Ignore The Readings" << std::endl;
      std:: cout << "2. Try To Decode" << std::endl;
      std:: cout << "please enter your choice \n" << std::endl;
      std:: cin >> nestedchoice;

      // player ignores
      if (nestedchoice == 1)
      {
        std:: cout << "He Starts to Explore Place. And Returns To The main gate after exploration to decide what to do next \n" << std::endl;
      }
      else if (nestedchoice == 2) // try to decode
      {
        std:: cout << "He decodes the Writings which turned out to be Way to find nearby Water Source and civilization \n" << std::endl;
      }
      
      
        break;      
    case 4:
     exploring =false;
     break;
    default:
    std:: cout << "Invalid choice please enter 1,2,3 or 4 to exit" << std::endl;
        break;
    }

    // Return 0 to indicate successfull execution
}
    return 0;

}