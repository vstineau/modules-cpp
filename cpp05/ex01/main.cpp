#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
	try
	{
		Bureaucrat stan("stan", 0);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what();
	}
	try
	{
		Bureaucrat steve("stan", 200);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what();
	}
	try
	{
		Bureaucrat bobby("bobby", 12);
		std::cout << bobby;
		bobby.upgrade();
		std::cout << bobby;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what();
	}
	try
	{
		Bureaucrat willy("willy", 1);
		std::cout << willy;
		willy.upgrade();
	}
	catch (std::exception & e)
	{
		std::cerr << e.what();
	}
	try
	{
		Bureaucrat timmy("timmy", 150);
		std::cout << timmy;
		timmy.downgrade();
	}
	catch (std::exception & e)
	{
		std::cerr << e.what();
	}
}

//void announcementTitle(std::string &message) {
//    std::cout << "\n" << std::setfill('-') << std::setw(message.length() + 3) << std::endl;
//    std::cout << message << std::endl;
//    std::cout << std::setfill('-') << std::setw(message.length()) << "\n" << std::endl;
//}
//
//void announcementMessage(std::string &message) {
//    std::cout << "\n" << std::setfill('-') << std::setw(message.length() + 3) << std::endl;
//    std::cout << message << std::endl;
//    std::cout << std::setfill('-') << std::setw(message.length()) << "\n" << std::endl;
//}
//
//int main() {
//    {
//        std::string message = "✅ No exceptions expected. ✅";
//        announcementTitle(message);
//        {
//            {
//
//                std::string message = "Creating a Bureaucrat with an initial grade of 1 and performing 149 decrements.";
//                announcementMessage(message);
//
//                Bureaucrat bureaucrat("First", 1);
//
//                try {
//                    for (int i = 0; i < 149; i++) {
//                        bureaucrat.downgrade();
//                    }
//                } catch (std::exception &ex) {
//                    std::cerr << ex.what() << std::endl;
//                }
//                std::cout << "After decrements: " << bureaucrat;
//            }
//
//            {
//                std::string message =
//                    "Creating a Bureaucrat with an initial grade of 150 and performing 149 increments.";
//                announcementMessage(message);
//
//                Bureaucrat bureaucrat("Last", 150);
//
//                try {
//                    for (int i = 0; i < 149; i++) {
//                        bureaucrat.upgrade();
//                    }
//                } catch (std::exception &ex) {
//                    std::cerr << ex.what() << std::endl;
//                }
//                std::cout << "After increments: " << bureaucrat;
//            }
//        }
//    }
//    {
//        std::string message = "❌ Exceptions expected. ❌";
//        announcementTitle(message);
//        {
//            {
//                std::string message =
//                    "Creating a Bureaucrat with an initial grade of 1 and attempting to increment the grade.";
//                announcementMessage(message);
//
//                Bureaucrat bureaucrat("First", 1);
//                try {
//                    bureaucrat.upgrade();
//                    bureaucrat.upgrade();
//                } catch (std::exception &ex) {
//                    std::cerr << ex.what() << std::endl;
//                }
//            }
//            {
//                std::string message =
//                    "Creating a Bureaucrat with an initial grade of 150 and attempting to decrement the grade.";
//                announcementMessage(message);
//
//                Bureaucrat bureaucrat("Last", 150);
//                try {
//                    bureaucrat.downgrade();
//                    bureaucrat.downgrade();
//                } catch (std::exception &ex) {
//                    std::cerr << ex.what() << std::endl;
//                }
//            }
//            {
//                std::string message = "Creating a Bureaucrat with an initial grade of 151.";
//                announcementMessage(message);
//
//                try {
//                    Bureaucrat bureaucrat("Too too roo!", 151);
//                } catch (std::exception &ex) {
//                    std::cerr << ex.what() << std::endl;
//                }
//            }
//        }
//    }
//}
