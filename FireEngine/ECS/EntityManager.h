#ifndef _ENTITYMANAGER_H
#define _ENTITYMANAGER_H

#include "Entity.h"

class EntityManager
{
public:
	EntityManager();
	~EntityManager();

	Entity Create();

private:
	static uint32_t m_id;
};

#endif // !_ENTITYMANAGER_H