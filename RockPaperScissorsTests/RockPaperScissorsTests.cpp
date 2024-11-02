#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
#include "../RockPaperScissors/RockPaperScissors.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RockPaperScissorsTests
{
	TEST_CLASS(RockPaperScissorsTests)
	{
	public:

		TEST_METHOD(TestTieCase)
		{
			const char* result = RockPaperScissors("Rock", "Rock");
			Assert::AreEqual("Tie", result);
		}

		TEST_METHOD(TestPlayer1WinsRock)
		{
			const char* result = RockPaperScissors("Rock", "Scissors");
			Assert::AreEqual("Player1", result);
		}

		TEST_METHOD(TestPlayer2WinsScissors)
		{
			const char* result = RockPaperScissors("Scissors", "Rock");
			Assert::AreEqual("Player2", result);
		}

		TEST_METHOD(TestInvalidInput)
		{
			const char* result = RockPaperScissors("Water", "Rock");
			Assert::AreEqual("Invalid", result);
		}
	};
}
