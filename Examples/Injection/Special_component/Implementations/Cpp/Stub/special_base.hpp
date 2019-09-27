/*++

Copyright (C) 2019 Special Numbers developers

All rights reserved.

Abstract: This is the class declaration of CBase

*/


#ifndef __SPECIAL_BASE
#define __SPECIAL_BASE

#include "special_interfaces.hpp"
#include <vector>
#include <list>
#include <memory>


// Include custom headers here.


namespace Special {
namespace Impl {


/*************************************************************************************************************************
 Class declaration of CBase 
**************************************************************************************************************************/

class CBase : public virtual IBase {
private:

	std::unique_ptr<std::list<std::string>> m_pErrors;
	Special_uint32 m_nReferenceCount = 1;

	/**
	* Put private members here.
	*/

protected:

	/**
	* Put protected members here.
	*/

public:

	/**
	* Put additional public members here. They will not be visible in the external API.
	*/

	bool GetLastErrorMessage(std::string & sErrorMessage) override;

	void ClearErrorMessages() override;

	void RegisterErrorMessage(const std::string & sErrorMessage) override;

	void IncRefCount() override;

	bool DecRefCount() override;


	/**
	* Public member functions to implement.
	*/

};

} // namespace Impl
} // namespace Special

#endif // __SPECIAL_BASE
