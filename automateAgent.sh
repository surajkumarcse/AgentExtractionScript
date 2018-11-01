#this script will go to every site whose address is given here
#after going to those sites it will store its content in "addAgent.json"
#sites name are only changed by "line" varible which contains name of the city in the file "processedCity.txt"

while read -r line; do
curl https://insurance-agent.safeco.com/FAANG_App_Svc/resources/api/location/PA/$line | cat>>addAgent.json
done < processedCity.txt

#curl < test.txt
#curl https://insurance-agent.safeco.com/FAANG_App_Svc/resources/api/location/NY/$1 | cat>>addAgent.json