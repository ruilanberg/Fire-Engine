#ifndef _ENTITY_H
#define _ENTITY_H

class Entity
{
public:
	Entity() : m_id{ m_id = id++ } {}

	int ID() {
		return m_id;
	}

private :
	int m_id = 0;

	static int id;
};

int Entity::id = 0;

#endif // !_ENTITY_H
