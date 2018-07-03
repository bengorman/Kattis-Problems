//
//  main.cpp
//  associationForControlOverMinds
//
//  Created by Ben Gorman on 6/27/18.
//  Copyright © 2018 Ben Gorman. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> ingredientVec;
    for(int i = 1; i <= n; i++) {
        ingredientVec[i] = i;
    }
    int sum = 0;
    vector<vector<int>> cauldronVec;
    for(int i = 0; i < n; i++) {
        int m;
        cin >> m;
        vector<int> currentRecipe;
        vector<int> missingIngredients;
        vector<int> hasIngredients;
        for(int j = 0; j < m; j++) {
            int temp;
            cin >> temp;
            currentRecipe.push_back(temp);
            if(find(ingredientVec.begin(), ingredientVec.end(), temp) != ingredientVec.end()) { //ingrVec contains temp
                hasIngredients.push_back(temp);
            } else {
                missingIngredients.push_back(temp);
            }
        }
        if(hasIngredients.size() > 0) {
            sum++;
            cauldronVec.push_back(currentRecipe);
            for(int j = 0; j < currentRecipe.size(); j++) {
                ingredientVec.erase(remove(ingredientVec.begin(), ingredientVec.end(), currentRecipe[j]));
            }
        } else {
            for(int j = 0; j < cauldronVec.size(); j++) {
                bool subset = true;
                for(int k = 0; j < cauldronVec[j].size(); k++) {
                    if(find(missingIngredients.begin(), missingIngredients.end(), cauldronVec[j][k]) == missingIngredients.end()) {
                        subset = false;
                        break;
                    }
                }
                if(subset) {
                    for(int k = 0; k < cauldronVec[j].size(); k++) {
                        missingIngredients.erase(remove(missingIngredients.begin(), missingIngredients.end(), cauldronVec[j][k]), missingIngredients.end());
                    }
                    cauldronVec.erase(cauldronVec.begin() + j);
                    if(missingIngredients.size() == 0) {
                        sum++;
                        cauldronVec.push_back(currentRecipe);
                        break;
                    }
                }
            }
        }
    }
    return 0;
}
