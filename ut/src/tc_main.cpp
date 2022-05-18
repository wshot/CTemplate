#include <stdio.h>
#include <template_api.h>
#include "gtest/gtest.h"
#include "../../src/adapter/DisplayAdapter.h"


TEST(UT_DISPLAY, display_adapter)
{
    RecordProperty("requirement", "backlightOff shall be executed sucessfully");
    RecordProperty("step1", "place App#1 to Zone#1");
    RecordProperty("step2", "App#1 request a video decoder");
    RecordProperty("expected", "main video decoder shall be allocated");

    DisplayAdapter adapter;
    EXPECT_EQ(0, adapter.backlightOff());
}

TEST(UT_DISPLAY, display_adapter2)
{
    RecordProperty("description", "this is a test case for backlightOff2");
    DisplayAdapter adapter;
    EXPECT_EQ(0, adapter.backlightOff());
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}