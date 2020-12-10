#pragma once

#include "MethodPtr.h"
#include "SharedBlock.h"
#include "NameID.h"

namespace Ubpa::UDRefl {
	struct MethodInfo {
		MethodPtr methodptr;
		std::unordered_map<TypeID, SharedBlock> attrs;
	};

	struct Method {
		NameID ID;
		MethodInfo info;
	};
}
