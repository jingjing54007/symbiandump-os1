/**
* Copyright (c) 2008-2009 Nokia Corporation and/or its subsidiary(-ies).
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



/**
 @file mtlr23Step.h
 @internalTechnology
*/
#if (!defined __MTLR23_STEP_H__)
#define __MTLR23_STEP_H__
#include <test/testexecutestepbase.h>
#include "te_suplprotocolsuitestepbase.h"
#include "suplgatewayinterface.h"
#include "suplinitgenerator.h"
#include <lbs/lbssuplpush.h>

class Cmtlr23Step : public CTe_suplprotocolSuiteStepBase, 
                   public MLbsSuplPushObserver
	{
public:
	Cmtlr23Step();
	~Cmtlr23Step();
	virtual TVerdict doTestStepPreambleL();
	virtual TVerdict doTestStepL();
	virtual TVerdict doTestStepPostambleL();

	// from MLbsSuplPushObserver
	void OnSuplInitComplete(TLbsSuplPushChannel aChannel, TLbsSuplPushRequestId aReqId, TInt aError, TInt aReserved);

private:
	CSuplGatewayInterface* iModule;
//	CTe_LbsSuplSmsTriggerSender* iSmsSender;
	CSuplInitGenerator* iSuplInitGenerator;
	CLbsSuplPush* iSuplPush;

	TInt iSmsSendError;
	TBufC8<1024> iReceiveBuffer;

	};

_LIT(Kmtlr23Step,"mtlr23Step");

#endif