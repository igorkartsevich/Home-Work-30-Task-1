#include "CMakeProject1.h"

enum TYPE_REQUEST {
	EXIT = 0, GET, POST, PUT, DEL, PATCH
};

int main()
{
	while (true) {
		std::cout << "Choise next action (GET-1 / POST-2 / PUT-3 / DELETE-4 / PATCH-5 / EXIT-0): ";
		int choise;
		std::cin >> choise;

		if (choise != EXIT) {
			cpr::Response r = (choise == GET) ? cpr::Get(cpr::Url("http://httpbin.org/get")) :
				(choise == POST) ? cpr::Post(cpr::Url("http://httpbin.org/post")) :
				(choise == PUT) ? cpr::Put(cpr::Url("http://httpbin.org/put")) :
				(choise == DEL) ? cpr::Delete(cpr::Url("http://httpbin.org/delete")) : cpr::Patch(cpr::Url("http://httpbin.org/patch"));
			std::cout << r.text << "\n\n";
		}
		else break;
	}

	return 0;
}