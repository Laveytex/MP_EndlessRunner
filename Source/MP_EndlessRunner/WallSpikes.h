#pragma once

#include "CoreMinimal.h"
#include "Spikes.h"
#include "WallSpikes.generated.h"

UCLASS()
class MP_ENDLESSRUNNER_API AWallSpikes : public ASpikes
{
	GENERATED_BODY()


public:
	
	AWallSpikes();

protected:
	virtual void BeginPlay() override;

public:

	virtual void Tick(float DeltaTime) override;

	
};
