#include "EntityManager.h"
#include "EntityManager.h"
#include "EntityManager.h"

uint32_t EntityManager::m_id = 0;

EntityManager::EntityManager()
{
}

EntityManager::~EntityManager()
{
}

Entity EntityManager::Create()
{
	Entity entt(m_id);
	m_id++;

	return entt;
}
