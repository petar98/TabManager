#include "stdafx.h"
#include "CppUnitTest.h"

#include "../TabManager/PromptPrinter.hpp"
#include "../TabManager/Client.hpp"
#include "../TabManager/CommandFactory.hpp"
#include "../TabManager/Command.hpp"
#include "../TabManager/BackCommand.hpp"
#include "../TabManager/ForwardCommand.hpp"
#include "../TabManager/GoCommand.hpp"
#include "../TabManager/InsertCommand.hpp"
#include "../TabManager/PrintCommand.hpp"
#include "../TabManager/RemoveCommand.hpp"
#include "../TabManager/SearchCommand.hpp"
#include "../TabManager/SortCommand.hpp"
#include "../TabManager/Tab.hpp"
#include "../TabManager/TabManagerServer.hpp"

#include "../TabManager/Common.hpp"

#include "../TabManager/PromptPrinter.cpp"
#include "../TabManager/Client.cpp"
#include "../TabManager/CommandFactory.cpp"
#include "../TabManager/BackCommand.cpp"
#include "../TabManager/ForwardCommand.cpp"
#include "../TabManager/GoCommand.cpp"
#include "../TabManager/InsertCommand.cpp"
#include "../TabManager/PrintCommand.cpp"
#include "../TabManager/RemoveCommand.cpp"
#include "../TabManager/SearchCommand.cpp"
#include "../TabManager/SortCommand.cpp"
#include "../TabManager/Tab.cpp"
#include "../TabManager/TabManagerServer.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace unitTests
{
	TEST_CLASS(TabUnitTest)
	{
	public:

		TEST_METHOD(TestTabInit)
		{
			std::string url = "test";
			Tab testTab(url);
			Assert::AreEqual(url, testTab.getUrl());
		}

		TEST_METHOD(TestTabInitDefault)
		{
			Tab testTab;
			std::string url = "about:blank";
			Assert::AreEqual(url, testTab.getUrl());
		}
	};

	TEST_CLASS(CommandFactoryUnitTest)
	{
	public:

		TEST_METHOD(CommandFactoryBackCommandTest)
		{
			CommandFactory commandFactory;
			std::string command = "BACK";
			bool result = commandFactory.checkCommandExistence(command);
			Assert::IsTrue(result);
		}

		TEST_METHOD(CommandFactoryForwardCommandTest)
		{
			CommandFactory commandFactory;
			std::string command = "FORWARD";
			Assert::IsTrue(commandFactory.checkCommandExistence(command));
		}

		TEST_METHOD(CommandFactoryGoCommandTest)
		{
			CommandFactory commandFactory;
			std::string command = "GO";
			Assert::IsTrue(commandFactory.checkCommandExistence(command));
		}

		TEST_METHOD(CommandFactoryInsertCommandTest)
		{
			CommandFactory commandFactory;
			std::string command = "INSERT";
			Assert::IsTrue(commandFactory.checkCommandExistence(command));
		}

		TEST_METHOD(CommandFactoryPrintCommandTest)
		{
			CommandFactory commandFactory;
			std::string command = "PRINT";
			Assert::IsTrue(commandFactory.checkCommandExistence(command));
		}

		TEST_METHOD(CommandFactoryRemoveCommandTest)
		{
			CommandFactory commandFactory;
			std::string command = "REMOVE";
			Assert::IsTrue(commandFactory.checkCommandExistence(command));
		}

		TEST_METHOD(CommandFactorySearchCommandTest)
		{
			CommandFactory commandFactory;
			std::string command = "SEARCH";
			Assert::IsTrue(commandFactory.checkCommandExistence(command));
		}

		TEST_METHOD(CommandFactorySortCommandTest)
		{
			CommandFactory commandFactory;
			std::string command = "SORT";
			Assert::IsTrue(commandFactory.checkCommandExistence(command));
		}

		TEST_METHOD(CommandFactoryRandomCommandTest)
		{
			CommandFactory commandFactory;
			std::string command = "RANDOM";
			Assert::IsFalse(commandFactory.checkCommandExistence(command));
		}

		TEST_METHOD(CommandFactoryRemoveInsertTest)
		{
			CommandFactory commandFactory;
			std::string command = "INSERT";
			Assert::IsTrue(commandFactory.removeCommand(command));
		}

		TEST_METHOD(CommandFactoryRemoveGoTest)
		{
			CommandFactory commandFactory;
			std::string command = "GO";
			Assert::IsTrue(commandFactory.removeCommand(command));
		}

		TEST_METHOD(CommandFactoryRemoveExceptionTest)
		{
			CommandFactory commandFactory;
			std::string command = "RANDOM";
			bool exceptionThrown = false;
			try
			{
				commandFactory.removeCommand(command);
			}
			catch (const std::invalid_argument& arg)
			{
				exceptionThrown = true;
			}

			Assert::IsTrue(exceptionThrown);
		}
	};

	TEST_CLASS(CommandBackUnitTest)
	{
	public:
		TEST_METHOD(CheckForInvokation)
		{
			Command* backCommand = new BackCommand;
			CommandStatus status = STATUS_EXECUTED;
			bool result = (status == backCommand->execute());
			Assert::IsTrue(result);
		}
	};
	
	TEST_CLASS(CommandForwardUnitTest)
	{
	public:
		TEST_METHOD(CheckForInvokation)
		{
			Command* forwardCommand = new ForwardCommand;
			CommandStatus status = STATUS_EXECUTED;
			bool result = (status == forwardCommand->execute());
			Assert::IsTrue(result);
		}
	};

	TEST_CLASS(CommandPrintUnitTest)
	{
	public:
		TEST_METHOD(CheckForInvokation)
		{
			Command* printCommand = new PrintCommand;
			CommandStatus status = STATUS_EXECUTED;
			bool result = (status == printCommand->execute());
			Assert::IsTrue(result);
		}
	};

	TEST_CLASS(CommandRemoveUnitTest)
	{
	public:
		TEST_METHOD(CheckForInvokation)
		{
			Command* removeCommand = new RemoveCommand;
			CommandStatus status = STATUS_EXECUTED;
			bool result = (status == removeCommand->execute());
			Assert::IsTrue(result);
		}
	};
}