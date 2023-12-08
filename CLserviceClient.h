#pragma once
#include "CLmapClient.h"
#include "CLcad.h"

namespace NS_Comp_Svc
{
	ref class CLservicesClient
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLmapClient^ oMappClient;
	public:
		CLservicesClient(void);
		System::Data::DataSet^ SelectionnerClient(System::String^);
	};
}
