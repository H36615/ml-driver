#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "Vehicle.generated.h"

UCLASS()
class MLDRIVER_API AVehicle : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AVehicle(const FObjectInitializer& ObjectInitializer);

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	UPROPERTY()
	USceneComponent *Root;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent *Mesh;

	UPROPERTY(EditAnywhere)
    UBoxComponent *Collision;

};
