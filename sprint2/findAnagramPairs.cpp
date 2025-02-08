#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

vector<pair<string, string>> findAnagramPairs(vector<string>& words){
  unordered_map<string, vector<string>> anagramGroups;

  for(const string& word: words){
    string sortedWord = word;
    sort(sortedWord.begin(), sortedWord.end());
    anagramGroups[sortedWord].push_back(word);
  }

  //Generate pairs from the grouped anagrams
  vector<pair<string, string>> result;
  for(const auto& entry : anagramGroups){
    const vector<string>& group = entry.second;
    if(group.size() > 1){
      for(size_t i=0; i<group.size(); i++){
        for(size_t j=i+1; j<group.size(); j++){
          result.emplace_back(group[i], group[j]);
        }
      }
    }
  }
  return result;
}

int main(){
  int n;
  cin>>n;
  vector<string> words(n);
  for(int i=0; i<n; i++){
    cin>>words[i];
  }
  vector<pair<string, string>> anagramPairs = findAnagramPairs(words);

  for(size_t i=0; i<anagramPairs.size(); i++){
    cout<<"("<<anagramPairs[i].first<<", "<<anagramPairs[i].second<<")";
    if(i < anagramPairs.size() - 1){
      cout<<", ";
    }
  }
  return 0;
}