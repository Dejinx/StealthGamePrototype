// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"


/**
 * 
 */
class STEALTHGAMEPROTOTYPE_API GOAPNode
{
public:
	GOAPNode();
	~GOAPNode();


	float cost = 999999;
	TArray<GOAPNode> CurrentPath;
	
};
