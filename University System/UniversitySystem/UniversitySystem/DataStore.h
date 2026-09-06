#pragma once
#include "SLL.h"

namespace UniversitySystem {

	public ref class DataStore abstract sealed {
	public:
		static SLL^ studentList = gcnew SLL();
	};
}
