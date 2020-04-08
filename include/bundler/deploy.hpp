#pragma once

#include <bundler/elf.hpp>

#include <filesystem>
#include <vector>
#include <string>

namespace fs = std::filesystem;

std::string repeat(std::string_view input, size_t num);

// Copy binaries over, change their rpath if they have it, and strip them
void deploy(std::vector<Elf> const &deps, fs::path const &bin, fs::path const &lib, fs::path const &strip, fs::path const &chrpath);