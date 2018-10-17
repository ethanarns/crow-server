#include "crow_all.h"
using namespace std;

int main(int argc, char const *argv[])
{
    crow:SimpleApp app;
    CROW_ROUTE(app, “/”)([]() å{
        return “<div>Hello world</div>”;
    });

    char *port = getenv("PORT");
    uint16_t iPort = static_cast<uint16_t>(port != NULL ? stoi(port): 18080);
    cout << "PORT = " << iPort << endl;
    app.port(iPort).multithreaded().run();
}
