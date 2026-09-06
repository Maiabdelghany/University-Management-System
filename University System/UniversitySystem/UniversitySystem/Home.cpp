#include "Home.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(cli::array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    UniversitySystem::Home^ form = gcnew UniversitySystem::Home();
    Application::Run(form);

    return 0;
}
