// SWAMI KARUPPASWAMI THUNNAI

#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

template <typename T>
class count_vectorizer
{
private:
	std::vector<T> sentences;
	std::set<unsigned long int> max_values;
	std::map<T, unsigned long int> tokens;
	unsigned long int max_features; // Total no of output features
	std::vector<T> header_values;
	std::map<T, unsigned long int> encoded_values;

	// Split all the sentences into unique tokens
	void generate_tokens_array();

	// Generate the headers
	void generate_headers();

	// Generate the encodings
	void generate_encodings();
public:
	count_vectorizer(std::vector<T> &sentences, unsigned long int max_features);
	void get_array();
	std::vector<T> get_headers();
	std::map<T, unsigned long int> encodings();
};