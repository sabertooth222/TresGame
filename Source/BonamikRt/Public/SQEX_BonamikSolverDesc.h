#pragma once
#include "CoreMinimal.h"
#include "SQEX_BonamikFpsCorrectionDesc.h"
#include "SQEX_BonamikSolverDesc.generated.h"

USTRUCT(BlueprintType)
struct FSQEX_BonamikSolverDesc {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint32 m_GroupID;
    
    UPROPERTY(VisibleAnywhere)
    FString m_GroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_IsEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_IsUseConeSEQ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_IsEnableDraw;
    
    UPROPERTY(EditAnywhere)
    uint32 m_ColIter;
    
    UPROPERTY(EditAnywhere)
    uint32 m_ConsIter;
    
    UPROPERTY(EditAnywhere)
    uint32 m_ConeIter;
    
    UPROPERTY(EditAnywhere)
    uint32 m_LinkIter;
    
    UPROPERTY(EditAnywhere)
    uint32 m_SolverIter;
    
    UPROPERTY(EditAnywhere)
    uint32 m_TagId;
    
    UPROPERTY(EditAnywhere)
    uint32 m_CollisionTagId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool m_EnableGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float m_LODdistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 m_RefUpVec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSQEX_BonamikFpsCorrectionDesc> m_FpsCorrection;
    
    BONAMIKRT_API FSQEX_BonamikSolverDesc();
};

