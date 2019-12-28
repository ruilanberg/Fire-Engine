#ifndef _ENTITY_H
#define _ENTITY_H

#include <stdint.h>

#include <memory>
#include <algorithm>

class Entity
{
public:

	friend class EntityManager;

	Entity() = default;
	~Entity() = default;

	inline uint32_t ID() {
		return m_id;
	}

private :
	Entity(uint32_t id) : m_id{ id } {};
	uint32_t m_id = 0;
};


#endif // !_ENTITY_H
