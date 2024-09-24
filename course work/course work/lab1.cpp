#include <iostream> 

class visitor
{
 private:
	 std::string name;

 public:
	 void entering_name()
	 {
		 std::string vis_name;
		 std::cin >> vis_name;
		 name = vis_name;
	 }

	 void print()
	 {
	   std::cout << name << '\n';
	 }

	 void chang_name()
	 {
	     std::cout << "New name: ";
		 std::string new_name;
		 std::cin >> new_name;
		 name = new_name;
	 }
};

delete_data()
{

}

int main()
{
	int number_visitors;
	std::cout << "Enter number of visitors\n";
	std::cin >> number_visitors;
	visitor* visitors = new visitor[number_visitors];
	system("cls");

	int operation_number;
	while (1)
	{
	  std::cout << "Number of visitors: "<< number_visitors << "\n\n"<< "1)Enter visitor data \n" << "2)Show visitor data \n" << "3)Change visitor name \n" << "4)Delete visitor data \n"; 
	  std::cout << "Choose operation: ";
	  std::cin >> operation_number;
	  std::cin.ignore();  
	  system("cls");

	  switch (operation_number)
	  {
	  case 1:
		  std::cout << "Enter data of "<< number_visitors<<" visitors:\n";
		  for (int i = 0; i < number_visitors; i++)
		  {
			  std::cout << i+1 << '.';
			  visitors[i].entering_name();
		  }
		  system("cls"); 
	  break;

	  case 2: 
	  {
		  std::cout << "Visitor's data:\n";
		  for (int i = 0; i < number_visitors; i++)
		  {
			  std::cout << i + 1 << '.';
			  visitors[i].print();
		  }
		  std::cout << "Press enter to back to menu";
		  std::cin.ignore();
		  system("cls");
	  }
		  break;

	  case 3:
	  {
	      std::cout << "Enter visitor's number to change name\n";
		  int visitor_num;
		  std::cin >> visitor_num;
		  visitors[visitor_num-1].chang_name();
		  system("cls");
	  }
		  break;
	  
	  case 4:  
		  {
			  std::cout << "Enter visitor's number to delete data\n";
			  int visitor_num;
			  std::cin >> visitor_num;
			  delete_data(visitors,number_visitors);
			  system("cls");
		  }
			break;

	  default:
		  std::cout << "Enter correct number! \n\n";
		  break;
		}
	}
	return 0;
}