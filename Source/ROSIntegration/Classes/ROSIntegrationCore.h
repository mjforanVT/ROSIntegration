#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/Object.h"



#include "ROSIntegrationCore.generated.h"


UCLASS()
class ROSINTEGRATION_API UROSIntegrationCore: public UObject
{
	GENERATED_UCLASS_BODY()

public:
	void Init();
	//void HandlerThread();
	void BeginDestroy() override;
	//void MessageCallback(const ROSBridgePublishMsg &message);
	//rosbridge2cpp::ROSBridge* GetROSBridge();
	//class ROSBridgeWrapper;
	//ROSBridgeWrapper* _ROSBridgeWrapper;

private:

	UPROPERTY()
	bool test;

	// PIMPL
	class Impl;
	Impl* _Implementation;

	friend class UTopic;
	friend class UService;


	
	bool bson_test_mode = true;
	//std::thread handler_thread_;
	//bool shutdown_thread_ = false;
	//bool thread_set_up_ = false;

	//TCPConnection _Connection;
	//rosbridge2cpp::ROSTopic* _Topic;

public:
	//rosbridge2cpp::ROSBridge _Ros{ _Connection };

};
