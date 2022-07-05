/*============================================================================
*
*  Virtual Machine Compiler source code loader header
*
============================================================================*/
#pragma once



namespace vm {

	class SourceFile {
	public:
		SourceFile(const char* filename);
		~SourceFile();
		char* getData();
	private:
		char* data;
	};

}