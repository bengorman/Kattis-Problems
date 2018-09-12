#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

struct Ingredient {
    string name;
    double weight, percentage;
    Ingredient(string n, double w, double p) : name(n), weight(w), percentage(p) {}
};

int main()
{
    int t;
    cin >> t;
    for(int ti = 1; ti <= t; ti++) {
        cout << "Recipe # " << ti << endl;

        double numIngredients, oldPortions, newPortions;
        cin >> numIngredients >> oldPortions >> newPortions;
        double scalingFactor = newPortions / oldPortions;

        Ingredient mainIngredient("", 0, 0);
        vector<Ingredient> ingredientVec;
        for(int i = 0; i < numIngredients; i++) {
            string name;
            double weight, percentage;
            cin >> name >> weight >> percentage;
            Ingredient currentIngredient(name, weight, percentage);
            if(percentage == 100) {
                mainIngredient = currentIngredient;
            }
            ingredientVec.push_back(currentIngredient);
        }

        double mainWeight = mainIngredient.weight * scalingFactor;
        for(int i = 0; i < numIngredients; i++) {
            Ingredient currentIngredient = ingredientVec[i];
            cout << currentIngredient.name << " " << fixed << setprecision(1) << (currentIngredient.percentage / 100.0) * mainWeight << endl;
        }

        cout << "----------------------------------------" << endl;
    }
    return 0;
}
