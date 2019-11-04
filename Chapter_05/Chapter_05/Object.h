#pragma once
#include "Headers.h"
#include "Struct.h"

class Object
{
public:
	Object();
	virtual ~Object();

public:
	virtual void Initialize() = 0;
	virtual void Progress() = 0;
	virtual void Render() = 0;
	virtual void Release() = 0;

};

