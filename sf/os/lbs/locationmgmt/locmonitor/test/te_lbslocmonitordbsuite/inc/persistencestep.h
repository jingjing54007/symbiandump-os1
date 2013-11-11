/*
* Copyright (c) 2007 Nokia Corporation and/or its subsidiary(-ies).
* All rights reserved.
* This component and the accompanying materials are made available
* under the terms of "Eclipse Public License v1.0"
* which accompanies this distribution, and is available
* at the URL "http://www.eclipse.org/legal/epl-v10.html".
*
* Initial Contributors:
* Nokia Corporation - initial contribution.
*
* Contributors:
*
* Description:
*
*/

#ifndef PERSISTENCESTEP_H
#define PERSISTENCESTEP_H
#include <test/TestExecuteStepBase.h>
#include "te_lbslocationmonitorsuitestepbase.h"

class CPersistenceStep : public CTe_LbsLocationMonitorSuiteStepBase
	{
public:
	CPersistenceStep();
	~CPersistenceStep();
	virtual TVerdict doTestStepPreambleL();
	virtual TVerdict doTestStepL();
	virtual TVerdict doTestStepPostambleL();

private:
	};

_LIT(KPersistenceStep,"PersistenceStep");

#endif