#ifndef MPAGSCIPHER_PROCESSCOMMANDLINE_HPP
#define MPAGSCIPHER_PROCESSCOMMANDLINE_HPP

#include <string>
#include <vector>

struct ProgramSettings {
    const std::vector<std::string>& cmdLineArgs;
    bool& helpRequested;
    bool& versionRequested;
    std::string& inputFile; 
    std::string& outputFile;
    std::string& cipherKey; 
    bool& encrypt;
};

bool processCommandLine(const ProgramSettings& ps);

#endif    // MPAGSCIPHER_PROCESSCOMMANDLINE_HPP