#include <gtest/gtest.h>

#include "../../FireEngine/ECS/Entity.h"
#include "../../FireEngine/ECS/EntityManager.h"

TEST(EntityCreate, UniqueID) {
	EntityManager em;

	Entity entt = em.Create();
	Entity enttOther = em.Create();

	EXPECT_NE(entt.ID(), enttOther.ID());
}

TEST(EntityCreate, SequenceID) {
	EntityManager em;

	Entity enttOne = em.Create();
	Entity enttTwo = em.Create();
	Entity enttThree = em.Create();

	EXPECT_EQ(enttTwo.ID(), enttOne.ID() + 1);
	EXPECT_EQ(enttThree.ID(), enttTwo.ID() + 1);
}