function getAdmins(map)
{
    for([key,value] of map)
    {
        if (value === "Admin")
        {
            admins.push(key);
        }
    }
}

const users = new Map();

users.set('Hugo', 'Admin');
users.set('Gabriela', 'Admin');
users.set('Leo', 'User');

console.log(getAdmins);

