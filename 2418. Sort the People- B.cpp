
//Time Complexity: 
//	O(n log n), n = no. of people.

class Solution {
public:

    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
    	// Create a vector of pairs to hold names and corresponding heights
    	vector<pair<int, string>> people;
    
    	// Fill the vector with pairs of (height, name)
    	for (size_t i = 0; i < names.size(); ++i) {
    	    people.emplace_back(heights[i], names[i]);
    	}
    
    	// Sort the vector of pairs based on height in descending order
    	sort(people.begin(), people.end(), [](const pair<int, string>& a, const pair<int, string>& b) {
    	    return a.first > b.first;
    	});
    
    	// Extract the sorted names
    	vector<string> sortedNames;
    	for (const auto& person : people) {
    	    sortedNames.push_back(person.second);
    	}
    
    	return sortedNames;
       
    }
};