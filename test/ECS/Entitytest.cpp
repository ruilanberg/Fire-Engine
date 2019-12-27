#include <gtest/gtest.h>
#include "../../FireEngine/ECS/Entity.h"

TEST(EntityCreate, UniqueID) {
	Entity entt;
	Entity enttOther;

	EXPECT_NE(entt.ID(), enttOther.ID());
}

TEST(EntityCreate, SequenceID) {
	Entity enttOne;
	Entity enttTwo;
	Entity enttThree;

	EXPECT_EQ(enttTwo.ID(), enttOne.ID() + 1);
	EXPECT_EQ(enttThree.ID(), enttTwo.ID() + 1);
}