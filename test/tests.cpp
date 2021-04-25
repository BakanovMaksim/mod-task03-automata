#include <gtest/gtest.h>
#include "Automata.h"

TEST(task, test1)
{
    Automata automata = Automata();
    automata.on();
    automata.coin(0);
    automata.choise(1);
    States result = automata.getState();
    EXPECT_EQ(WAIT, result);
}

TEST(task, test2)
{
    Automata automata = Automata();
    automata.on();
    automata.choise(1);
    States result = automata.getState();
    EXPECT_EQ(WAIT, result);
}

TEST(task, test3)
{
    Automata automata = Automata();
    automata.on();
    automata.coin(150);
    automata.choise(0);
    int result = automata.finish();
    EXPECT_EQ(50, result);
}
