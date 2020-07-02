
#include "Vehicle.h"
#include "Components/BoxComponent.h"

// Sets default values
AVehicle::AVehicle(const FObjectInitializer& ObjectInitializer)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create root component.
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

	// Create Mesh Component.
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->AttachToComponent(Root, FAttachmentTransformRules::KeepRelativeTransform);

	// Set properties to the created mesh component like the model.
	static ConstructorHelpers::FObjectFinder<UStaticMesh> CarModel(TEXT("/Game/Meshes/car_basic"));
	if (CarModel.Succeeded())
	{
		Mesh->SetStaticMesh(CarModel.Object);
		// TODO Add materials.
		// TODO remove comments below.
		// Mesh->SetRelativeLocation(FVector(0.0f, 0.0f, -40.0f));
		// Mesh->SetWorldScale3D(FVector(0.8f));
		
		Mesh->SetSimulatePhysics(true);
	}



	// -- Camera...
	// TODO Set the camera from code, not from the editor.
	// Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera0"));
	// Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
	// Camera->bUsePawnControlRotation = false;
	// Camera->FieldOfView = 90.f;
	//
	//      this->PlayerController = this->GetWorld()->GetFirstPlayerController();
	// if (this->PlayerController && this->ViewTarget)
	// {
	// 	this->PlayerController->SetViewTarget(this->ViewTarget);
	// }
}

void AVehicle::BeginPlay()
{
	Super::BeginPlay();
	
}

void AVehicle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

